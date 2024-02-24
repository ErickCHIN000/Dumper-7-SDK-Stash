#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2A8 - 0x220)
// BlueprintGeneratedClass ba_LightingController_01.ba_LightingController_01_C
class Aba_LightingController_01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class Ubc_LightingElement_01_SkySphere_C*    bc_LightingElement_01_SkySphere;                   // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  SkySphere;                                         // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Ubc_LightingElement_01_DirectionalLight_C* bc_LightingElement_01_DirectionalLight;            // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*            DirectionalLight;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Ubc_LightingElement_01_PostProcess_C*  bc_LightingElement_01_PostProcess;                 // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Ubc_LightingElement_01_ExponentialHeightFog_C* bc_LightingElement_01_ExponentialHeightFog;        // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Ubc_LightingElement_01_AtmosphericFog_C* bc_LightingElement_01_AtmosphericFog;              // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Ubc_LightingElement_01_SkyLight_C*     bc_LightingElement_01_SkyLight;                    // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UExponentialHeightFogComponent*        ExponentialHeightFog;                              // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAtmosphericFogComponent*              AtmosphericFog;                                    // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                    SkyLight;                                          // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard;                                         // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class Aba_LightingSetup_01_C*>        ActiveSetupList;                                   // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UObject*>                       LightingElements;                                  // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class Aba_LightingController_01_C* GetDefaultObj();

	void FindLowerPrioritySetup(class Ubc_LightingElement_01_C* LightingElement, class Aba_LightingSetup_01_C** Result, class Aba_LightingSetup_01_C* LowerSetup, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class Aba_LightingSetup_01_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_OverwriteCheck_Result, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void Refresh(const TArray<class Aba_LightingSetup_01_C*>& ToDelete, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, TArray<class Ubc_LightingElement_01_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class Ubc_LightingElement_01_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class Aba_LightingSetup_01_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class Aba_LightingSetup_01_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Aba_LightingSetup_01_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsInEditor_ReturnValue, class Aba_LightingSetup_01_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3);
	void SetupDeactivated(class Aba_LightingSetup_01_C* Setup, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsInEditor_ReturnValue, TArray<class Ubc_LightingElement_01_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class Ubc_LightingElement_01_C* CallFunc_Array_Get_Item, bool CallFunc_Array_RemoveItem_ReturnValue, class Aba_LightingSetup_01_C* CallFunc_FindLowerPrioritySetup_Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Update_Success, bool CallFunc_Backup_Success, bool CallFunc_OverwriteCheck_Result, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void MakeChange(float Delta, float NextChangeProgress, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class Ubc_LightingElement_01_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class Ubc_LightingElement_01_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_Update_Success);
	void SetupActivated(class Aba_LightingSetup_01_C* Setup, class Aba_LightingSetup_01_C* NewSetup, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsInEditor_ReturnValue, bool CallFunc_IsInEditor_ReturnValue_1, TArray<class Ubc_LightingElement_01_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class Ubc_LightingElement_01_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Update_Success, bool CallFunc_Backup_Success, class Aba_LightingSetup_01_C* CallFunc_FindLowerPrioritySetup_Result, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Update_Success_1, bool CallFunc_Backup_Success_1, bool CallFunc_OverwriteCheck_Result, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void UserConstructionScript(class Aba_CustomSkySphere_01_C* K2Node_DynamicCast_AsBa_Custom_Sky_Sphere_01, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_ba_LightingController_01(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


