#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x861 - 0x820)
// BlueprintGeneratedClass AIStolenProjDetector.AIStolenProjDetector_C
class UAIStolenProjDetector_C : public UAIStolenProjectileComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x820(0x8)(Transient, DuplicateTransient)
	UMulticastDelegateProperty_                  AIStolenProjectileUpdated;                         // 0x828(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         OvercameChanceToInteract;                          // 0x838(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F56[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  AIStolenProjectileReturnFX;                        // 0x840(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  AIStolenProjectileDestroyFX;                       // 0x850(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class Enum_AIThrowAtStyle               MyReturnStyle;                                     // 0x860(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIStolenProjDetector_C* GetDefaultObj();

	void AIStolenProj_AttemptDetonate(bool* Success, bool CallFunc_DetonateProjectile_ReturnValue);
	void AIStolenProj_AttemptDisarm(bool* Success, bool CallFunc_DisarmProjectile_ReturnValue);
	void AIStolenProj_AttemptDestroy(bool* Success, bool CallFunc_DestroyProjectile_ReturnValue);
	void AIStolenProj_AttemptAttach(class FName SocketName, bool* Success, bool CallFunc_AttachProjectile_ReturnValue);
	void AIStolenProj_AttemptReturnTo(enum class Enum_AIThrowAtStyle ReturnTo, class FName TargetSocket, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& TargetOffset, class AActor* SpecifiedActor, const struct FVector& WorldLocation, bool* Success, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ReturnProjectileToLocation_ReturnValue, bool CallFunc_ReturnProjectileToActor_ReturnValue, bool CallFunc_ReturnProjectileToOwner_ReturnValue, bool CallFunc_ReturnProjectileToTarget_ReturnValue);
	void AIStolenProj_AttemptLerpToSocket(class FName SocketToLerpTo, float LerpDuration, bool* Success, bool CallFunc_LerpToSocket_ReturnValue);
	void AIStolenProj_GetElementalTypeFromStolenProjectile(enum class EOakElementalType* StolenProjectileElement, enum class EOakElementalType CallFunc_GetElementalType_ReturnValue);
	void ReceiveBeginPlay();
	void OnStolenProjectileUpdated_Event_0(class AActor* StolenProjectile);
	void OnStolenProjectileDestroyed_Event_0(class AActor* StolenProjectile);
	void OnStolenProjectileReturned_Event_0(class AActor* StolenProjectile);
	void ExecuteUbergraph_AIStolenProjDetector(int32 EntryPoint, class AActor* K2Node_CustomEvent_StolenProjectile, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AActor* K2Node_CustomEvent_StolenProjectile2, class AActor* K2Node_CustomEvent_StolenProjectile1);
	void AIStolenProjectileDestroyFX__DelegateSignature(class AActor* MyStolenProjectile);
	void AIStolenProjectileReturnFX__DelegateSignature(class AActor* MyStolenProjectile);
	void AIStolenProjectileUpdated__DelegateSignature(class AActor* MyStolenProjectile);
};

}


