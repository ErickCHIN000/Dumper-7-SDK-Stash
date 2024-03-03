#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x100 - 0xB0)
// BlueprintGeneratedClass DissolveComponent.DissolveComponent_C
class UDissolveComponent_C : public UActorComponent
{
public:
	class UMaterialInstance*                     DissolveMaterial;                                  // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DissolveValueName;                                 // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DissolveColorName;                                 // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DissolveInterpSpeed;                               // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DissolveColor;                                     // 0xCC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FF_DissolvedComponent>         DissolvedComponents;                               // 0xE0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            OnDissolveFinished;                                // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UDissolveComponent_C* GetDefaultObj();

	void RemoveComponent(int32 Index);
	void RestoreComponentMaterials(int32 Index, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void FindComponent(class UPrimitiveComponent* Component, int32* Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FF_DissolvedComponent& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void DissolveComponents(float L_NewValue, int32 L_Index, bool L_KeepDissolving, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FF_DissolvedComponent& CallFunc_Array_Get_Item_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_FInterpTo_Constant_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue);
	void StopDissolve(class UPrimitiveComponent* Component, int32 L_Index, int32 CallFunc_FindComponent_Index, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void StartDissolve(class UPrimitiveComponent* Component, bool Reverse, int32 L_ComponentIndex, const TArray<class UMaterialInstanceDynamic*>& L_DissolveMaterials, const TArray<class UMaterialInterface*>& L_Materials, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_FindComponent_Index, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FF_DissolvedComponent& K2Node_MakeStruct_F_DissolvedComponent, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void OnDissolveFinished__DelegateSignature(class UPrimitiveComponent* Component, bool Reversed);
};

}


