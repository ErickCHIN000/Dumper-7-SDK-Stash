#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2C0 - 0x230)
// BlueprintGeneratedClass BP_GenericNPC.BP_GenericNPC_C
class ABP_GenericNPC_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  NPCAccs;                                           // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  NPCHair;                                           // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NPCLower;                                          // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NPCUpper;                                          // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NPCHead;                                           // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         AnimToPlay;                                        // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayRate;                                          // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnNPCOnDamage;                                  // 0x274(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         RagdollSpawnedNPCOnSpawn;                          // 0x275(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ImpulseForce;                                      // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGender                           Gender;                                            // 0x27C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          AppearanceArea;                                    // 0x280(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        PredeterminedElements;                             // 0x288(0x10)(Edit, BlueprintVisible)
	class FString                                AppearanceSet;                                     // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        AppearanceOverride;                                // 0x2A8(0x10)(Edit, BlueprintVisible)
	enum class EMoods                            StartingMood;                                      // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_465[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxCullDistance;                                   // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_GenericNPC_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_IsValid_ReturnValue);
	void Finished_1F1A6E984D17228626AF658FCC7EB63A(TArray<struct FLoadedAppearancePart>& AppearanceParts, class UMaterialInterface* SkinMaterial);
	void ReceiveBeginPlay();
	void SpawnNPC(const struct FVector& Impulse, const struct FVector& OffsetLoc);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ExecuteUbergraph_BP_GenericNPC(int32 EntryPoint, const struct FVector& K2Node_CustomEvent_Impulse, const struct FVector& K2Node_CustomEvent_OffsetLoc, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<struct FLoadedAppearancePart>& Temp_struct_Variable, class UMaterialInterface* Temp_object_Variable, const struct FLoadedAppearancePart& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FLoadedAppearancePart>& K2Node_CustomEvent_AppearanceParts, class UMaterialInterface* K2Node_CustomEvent_SkinMaterial, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class USceneComponent* CallFunc_CreateComponent_ReturnValue, class AGGNPC* CallFunc_SpawnCivilianNPC_ReturnValue, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SetStaticMesh_ReturnValue_1, class UGGLoadNPCAppearance* CallFunc_LoadNPCAppearance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


