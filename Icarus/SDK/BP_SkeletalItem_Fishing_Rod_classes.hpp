#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x280 (0x7F8 - 0x578)
// BlueprintGeneratedClass BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C
class ABP_SkeletalItem_Fishing_Rod_C : public ASkeletalItem
{
public:
	uint8                                        Pad_57AA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCableComponent*                       FishingLine;                                       // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  Lure;                                              // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   CastAudio;                                         // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       LureAttach;                                        // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       AttachPoint;                                       // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Reeling;                                           // 0x5B0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsFishOnLine;                                      // 0x5B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FullyCasted;                                       // 0x5B2(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57D9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             FishItemData;                                      // 0x5B8(0x1F0)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	float                                        CastLength;                                        // 0x7A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VerticalReelSpeed;                                 // 0x7AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HorizontalReelSpeed;                               // 0x7B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxCastLength;                                     // 0x7B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinLureDistance;                                   // 0x7B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxLureDistance;                                   // 0x7BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Fishing_Rod_Lure_C*                LureActor;                                         // 0x7C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasCastIntoWater;                                  // 0x7C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_580B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            FishAdded;                                         // 0x7D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        PickupDistance;                                    // 0x7E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5811[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_C*                  UserInterface;                                     // 0x7E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     ThrashingVFX;                                      // 0x7F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Fishing_Rod_C* GetDefaultObj();

	bool IsLureTooClose(class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void Is_Lure_Overlapping_Water(bool* IsFloating, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure, bool CallFunc_Is_Floating_IsFloating, bool CallFunc_IsValid_ReturnValue);
	bool IsLureTooFar(class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void OnRep_FishItemData(bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure, enum class EDataValid CallFunc_ItemDataValid_Paths, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure_1, class UBP_UIProjectionComponent_Fishing_C* CallFunc_GetProjectionComponent_BP_UIProjectionComponent_Fishing, bool CallFunc_IsValid_ReturnValue_1, enum class EDataValid CallFunc_ItemDataValid_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_1);
	void GivePlayerFish(class AActor* CallFunc_GetOwner_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue);
	void DoesHaveLure(bool* HasLure, struct FItemData* CurrentLure, enum class EValid CallFunc_GetTrait_Paths, class UInventoryContainerComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetInventory_Inventory, bool CallFunc_GetInventory_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_1);
	void IsCasted(bool* Casted, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure, bool CallFunc_IsValid_ReturnValue);
	void LaunchLure(const struct FVector& Velocity, bool CallFunc_IsCasted_Casted, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure_1);
	void GetLure(class ABP_Fishing_Rod_Lure_C** Lure, bool CallFunc_IsValid_ReturnValue, class ABP_Fishing_Rod_Lure_C* K2Node_DynamicCast_AsBP_Fishing_Rod_Lure, bool K2Node_DynamicCast_bSuccess);
	void ResetLure(bool WasPreviouslyCasted, class ABP_IcarusPlayerCharacterSurvival_C* Current_Player, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure);
	void LureCollide(class AActor* CallFunc_GetOwner_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Vector_Distance_ReturnValue);
	void LureOverlap(class AActor* CallFunc_GetOwner_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Vector_Distance_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void MULTI_OnCasted();
	void MULTI_OnLanded();
	void MULTI_OnReset(bool WasPreviouslyCasted);
	void Server_BobLure();
	void MULTI_OnBobLure();
	void ExecuteUbergraph_BP_SkeletalItem_Fishing_Rod(int32 EntryPoint, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float K2Node_Event_DeltaSeconds, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure_1, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure_2, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure_3, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure_4, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_1, class ACharacter* K2Node_DynamicCast_AsCharacter_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure_5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsSimulatingPhysics_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector& CallFunc_GetPhysicsLinearVelocity_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, bool CallFunc_IsDedicatedServer_ReturnValue_2, float CallFunc_FClamp_ReturnValue, bool CallFunc_IsCasted_Casted, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, bool K2Node_CustomEvent_WasPreviouslyCasted, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue_3, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure_6, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure_7, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue, float Temp_wildcard_Variable, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_2, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_UserInterface_C* K2Node_DynamicCast_AsUMG_User_Interface, bool K2Node_DynamicCast_bSuccess_3, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure_9, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure_10, bool CallFunc_IsValid_ReturnValue_5, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_Vector_Distance_ReturnValue_2, float CallFunc_FMin_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsLocallyControlled_ReturnValue, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure_11, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess_4, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult);
	void FishAdded__DelegateSignature();
};

}


