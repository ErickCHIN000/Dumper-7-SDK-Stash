#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x180 (0x3A0 - 0x220)
// BlueprintGeneratedClass BP_PlayerCapture.BP_PlayerCapture_C
class ABP_PlayerCapture_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  Longsword;                                         // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Spear;                                             // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Dagger_Offhand;                                    // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ShieldMesh;                                        // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SwordMesh;                                         // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                BowMesh;                                           // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Legs;                                              // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Chest;                                             // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                HeadCosmetic;                                      // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                DongCosmetic;                                      // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Boots;                                             // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Dong;                                              // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Outfit;                                            // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Gloves;                                            // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head;                                              // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        MaxStaminaTimeline_Value_4C090F574A0F612B054961B0B9B0FD0D; // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                MaxStaminaTimeline__Direction_4C090F574A0F612B054961B0B9B0FD0D; // 0x2B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D48[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    MaxStaminaTimeline;                                // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraShakeTimeline_NewTrack_0_606EAC0043F267AEC4AA3E9ED5374AF5; // 0x2C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CameraShakeTimeline__Direction_606EAC0043F267AEC4AA3E9ED5374AF5; // 0x2CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D4B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CameraShakeTimeline;                               // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxHealthTimeline_Value_6B52B3DE4072474409EB85842327735B; // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                MaxHealthTimeline__Direction_6B52B3DE4072474409EB85842327735B; // 0x2DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D51[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    MaxHealthTimeline;                                 // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AttackSpeedTimeline_Value_78FA2F2C4BF09ABB85DC45ADCC67D411; // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                AttackSpeedTimeline__Direction_78FA2F2C4BF09ABB85DC45ADCC67D411; // 0x2EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D55[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    AttackSpeedTimeline;                               // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageTimeline_Value_AA1F2108425D64C778C048851E259A1F; // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                DamageTimeline__Direction_AA1F2108425D64C778C048851E259A1F; // 0x2FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    DamageTimeline;                                    // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ArmorTimeline_Value_8B7584314C3D0ADA56EC4B84AF6E1896; // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                ArmorTimeline__Direction_8B7584314C3D0ADA56EC4B84AF6E1896; // 0x30C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D5F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ArmorTimeline;                                     // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StaminaTimeline_Value_6FE2FB3D4B67C2C9C325489DB7E6D48F; // 0x318(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                StaminaTimeline__Direction_6FE2FB3D4B67C2C9C325489DB7E6D48F; // 0x31C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D63[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    StaminaTimeline;                                   // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealthTimeline_Value_4EED1F484F21AE2715568195D728F04C; // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                HealthTimeline__Direction_4EED1F484F21AE2715568195D728F04C; // 0x32C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D65[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    HealthTimeline;                                    // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CombatCharacter_C*                 Player_Ref;                                        // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BASE_ITEM_C*                       Armor_Item;                                        // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BASE_ITEM_C*                       Weapon_Item;                                       // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BASE_ITEM_C*                       Shield_Item;                                       // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAC_ActionConsumables_C*               ActionConsumables_Component;                       // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AdditionalEffect                HealthAdditionalEffect;                            // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AdditionalEffect                StaminaAdditionalEffect;                           // 0x369(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D7F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPostProcessComponent*                 PostProcess_Drunk_Ref;                             // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 PostProcess_NightVision;                           // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AdditionalEffect                ArmorAdditionalEffect;                             // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AdditionalEffect                DamageAdditionalEffect;                            // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AdditionalEffect                AttackSpeedAdditionalEffect;                       // 0x382(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AdditionalEffect                MaxHealthAdditionalEffect;                         // 0x383(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AdditionalEffect                MaxStaminaAdditionalEffect;                        // 0x384(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D98[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timeline_Duration;                                 // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AdditionalEffect                Additional_Effect;                                 // 0x38C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_BASE_ITEM_C*                       Bow_Item;                                          // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   Slot;                                              // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PlayerCapture_C* GetDefaultObj();

	void Clear_AdditionalEffect_from_Stat(enum class E_StatCategory Stat, enum class E_StatCategory Temp_byte_Variable, enum class E_AdditionalEffect K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Assign_Additional_Effect(enum class E_StatCategory Stat, enum class E_AdditionalEffect AdditionalEffect, bool K2Node_SwitchEnum_CmpSuccess);
	void Is_assigned_to_other_stat_(enum class E_StatCategory Stat, bool* Is_, enum class E_StatCategory Temp_byte_Variable, enum class E_AdditionalEffect K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, int32 CallFunc_Conv_BoolToInt_ReturnValue_4, int32 CallFunc_Conv_BoolToInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, int32 CallFunc_Conv_BoolToInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue);
	void Detach_Item(const struct FS_ItemData& Item_Data, class USkeletalMeshComponent* Temp_object_Variable, bool K2Node_SwitchEnum_CmpSuccess, class USkeletalMeshComponent* Temp_object_Variable_1, class USkeletalMeshComponent* Temp_object_Variable_2, class USkeletalMeshComponent* Temp_object_Variable_3, class USkeletalMeshComponent* Temp_object_Variable_4, class USkeletalMeshComponent* Temp_object_Variable_5, class USkeletalMeshComponent* Temp_object_Variable_6, class USkeletalMeshComponent* Temp_object_Variable_7, class USkeletalMeshComponent* Temp_object_Variable_8, class USkeletalMeshComponent* Temp_object_Variable_9, class USkeletalMeshComponent* Temp_object_Variable_10, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, enum class E_ItemSlot Temp_byte_Variable, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_3, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_1, bool CallFunc_SetStaticMesh_ReturnValue_4, class USkeletalMeshComponent* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
	void Attach_Item(const struct FS_ItemData& Item_Data, class USkeletalMeshComponent* Temp_object_Variable, class USkeletalMeshComponent* Temp_object_Variable_1, bool CallFunc_IsValidClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class USkeletalMeshComponent* Temp_object_Variable_2, class USkeletalMeshComponent* Temp_object_Variable_3, class USkeletalMeshComponent* Temp_object_Variable_4, class USkeletalMeshComponent* Temp_object_Variable_5, class USkeletalMeshComponent* Temp_object_Variable_6, class USkeletalMeshComponent* Temp_object_Variable_7, class USkeletalMeshComponent* Temp_object_Variable_8, class ABP_BASE_ARMOR_C* K2Node_DynamicCast_AsBP_BASE_ARMOR, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class USkeletalMeshComponent* Temp_object_Variable_9, int32 Temp_int_Array_Index_Variable, class ABP_BASE_SHIELD_C* K2Node_DynamicCast_AsBP_BASE_SHIELD, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Array_Index_Variable_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_BASE_ITEM_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class USkeletalMeshComponent* Temp_object_Variable_10, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class ABP_BASE_ITEM_C* CallFunc_FinishSpawningActor_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_Get_Materials_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class E_ItemSlot Temp_byte_Variable, const struct FTransform& CallFunc_GetTransform_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ABP_BASE_ITEM_C* CallFunc_FinishSpawningActor_ReturnValue_2, TArray<class UMaterialInterface*>& CallFunc_Get_Materials_ReturnValue_1, class UMaterialInterface* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, class ABP_BASE_ITEM_C* CallFunc_FinishSpawningActor_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue_4, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4, class ABP_BASE_ITEM_C* CallFunc_FinishSpawningActor_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, class ABP_BASE_ARMOR_C* K2Node_DynamicCast_AsBP_BASE_ARMOR_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_4, const struct FTransform& CallFunc_GetTransform_ReturnValue_5, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5, class ABP_BASE_ITEM_C* CallFunc_FinishSpawningActor_ReturnValue_5, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class USkeletalMeshComponent* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_4);
	void CameraShakeTimeline__FinishedFunc();
	void CameraShakeTimeline__UpdateFunc();
	void HealthTimeline__FinishedFunc();
	void HealthTimeline__UpdateFunc();
	void MaxHealthTimeline__FinishedFunc();
	void MaxHealthTimeline__UpdateFunc();
	void StaminaTimeline__FinishedFunc();
	void StaminaTimeline__UpdateFunc();
	void MaxStaminaTimeline__FinishedFunc();
	void MaxStaminaTimeline__UpdateFunc();
	void ArmorTimeline__FinishedFunc();
	void ArmorTimeline__UpdateFunc();
	void DamageTimeline__FinishedFunc();
	void DamageTimeline__UpdateFunc();
	void AttackSpeedTimeline__FinishedFunc();
	void AttackSpeedTimeline__UpdateFunc();
	void Play_Timeline();
	void Stop_Timeline();
	void Play_Additional_Effect(enum class E_AdditionalEffect Additional_Effect);
	void Remove_Additional_Effect(enum class E_AdditionalEffect Additional_Effect);
	void Event_Initialize_Timeline(float Duration, enum class E_StatCategory Stat, enum class E_AdditionalEffect Additional_Effect);
	void Detach_from_Player_Capture(const struct FS_ItemData& Item_Data);
	void Attach_to_Player_Capture(const struct FS_ItemData& Item_Data);
	void Initialize_Player_Capture();
	void MoveCamera();
	void ReceiveBeginPlay();
	void PassReference(class ABP_PlayerCapture_C* Capture_Reference);
	void ExecuteUbergraph_BP_PlayerCapture(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, enum class EMoveComponentAction Temp_byte_Variable, const struct FTransform& Temp_struct_Variable_1, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue_1, enum class E_AdditionalEffect K2Node_CustomEvent_Additional_Effect_2, enum class E_AdditionalEffect K2Node_CustomEvent_Additional_Effect_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, float K2Node_CustomEvent_Duration, enum class E_StatCategory K2Node_CustomEvent_Stat, enum class E_AdditionalEffect K2Node_CustomEvent_Additional_Effect, bool K2Node_SwitchEnum_CmpSuccess_2, float CallFunc_Divide_FloatFloat_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, TScriptInterface<class IBPI_PlayerCapture_C> K2Node_DynamicCast_AsBPI_Player_Capture, bool K2Node_DynamicCast_bSuccess, const struct FS_ItemData& K2Node_Event_Item_Data_1, const struct FS_ItemData& K2Node_Event_Item_Data, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, class ABP_PlayerCapture_C* K2Node_Event_Capture_Reference, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4);
};

}


