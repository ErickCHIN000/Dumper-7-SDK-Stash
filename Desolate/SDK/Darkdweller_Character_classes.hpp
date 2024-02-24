#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5F (0x1208 - 0x11A9)
// BlueprintGeneratedClass Darkdweller_Character.Darkdweller_Character_C
class ADarkdweller_Character_C : public ABaseAggressiveAiCharacter_C
{
public:
	uint8                                        Pad_196B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                KitMesh;                                           // 0x11B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                FaceMesh;                                          // 0x11C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                BootsMesh;                                         // 0x11C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USHAICustomizationComponent*           SHAICustomization;                                 // 0x11D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EDarkweller_PatrolTypes           IdleType;                                          // 0x11D8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1973[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDarkdweller_SyncService_C*            LocalSyncService;                                  // 0x11E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASHFlashLight*>                 Flashlights;                                       // 0x11E8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         FearOfLight;                                       // 0x11F8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1977[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StartLocation;                                     // 0x11FC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADarkdweller_Character_C* GetDefaultObj();

	bool UpdateSpecialState(float DeltaTime);
	bool UpdateAttackState(float DeltaTime, bool CallFunc_UpdateAttackState_ReturnValue);
	bool OnLeaveFlashlight(class ASHFlashLight* Flashlight, bool CallFunc_Array_RemoveItem_ReturnValue);
	void UpdateFlashlights(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ASHFlashLight* CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SetEnemyCharacter_ReturnValue, bool CallFunc_IsAlive_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
	bool OnEnterFlashlight(class ASHFlashLight* Flashlight, int32 CallFunc_Array_AddUnique_ReturnValue);
	void SetIdleType(enum class EDarkweller_PatrolTypes IdleType);
	void SetSyncService(class UBTS_BaseSyncService_C* Service, bool* Result, bool CallFunc_SetSyncService_Result, class UDarkdweller_SyncService_C* K2Node_DynamicCast_AsDarkdweller_Sync_Service, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CustomEvent_0();
	void ExecuteUbergraph_Darkdweller_Character(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USkeletalMesh* CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class USkeletalMesh* CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class USkeletalMesh* CallFunc_Array_Get_Item_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2);
};

}


