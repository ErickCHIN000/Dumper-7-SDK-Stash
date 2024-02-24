#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3C8 - 0x3B0)
// BlueprintGeneratedClass AIMeleeSpawningComponent.AIMeleeSpawningComponent_C
class UAIMeleeSpawningComponent_C : public UAIHeldActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(Transient, DuplicateTransient)
	class AActor*                                MyMeleeWeapon;                                     // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 MyPawn;                                            // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIMeleeSpawningComponent_C* GetDefaultObj();

	void AIMelee_GetElementalTypeFromMeleeWeapon(enum class EOakElementalType* MeleeWeaponElement, TScriptInterface<class IAIHeldActorInterface> K2Node_DynamicCast_AsAIHeld_Actor_Interface, bool K2Node_DynamicCast_bSuccess, enum class EOakElementalType CallFunc_AIHeldActor_GetElementalType_ReturnValue);
	void AIMelee_Drop(bool RequestNewMeleeWeapon);
	void AIMelee_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, class FName TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
	void AIMelee_Spawn();
	void AIMelee_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, class FName ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
	void AIMelee_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
	void AIMelee_SetNewMeleeWeaponClass(class UClass* NewMeleeWeaponClass);
	void OnHeldActorNativeDrop(class AActor* Actor);
	void ExecuteUbergraph_AIMeleeSpawningComponent(int32 EntryPoint, class AActor* K2Node_Event_Actor, bool K2Node_Event_RequestNewMeleeWeapon3, float K2Node_Event_ThrowSpeed2, float K2Node_Event_ThrowAnglePercent, class FName K2Node_Event_TargetSocket, const struct FVector& K2Node_Event_TargetOffset, const struct FRotator& K2Node_Event_ThrowAngleOffset1, float K2Node_Event_MaxPrediction1, bool K2Node_Event_RequestNewMeleeWeapon2, bool K2Node_Event_SpawnIfDoesntExist2, class AActor* K2Node_Event_ActorToThrowAt, float K2Node_Event_ThrowSpeed1, float K2Node_Event_ThrowAnglePercentage1, class FName K2Node_Event_ActorSocket, const struct FVector& K2Node_Event_ActorOffset, const struct FRotator& K2Node_Event_ThrowAngleOffset, float K2Node_Event_MaxPrediction, bool K2Node_Event_RequestNewMeleeWeapon1, bool K2Node_Event_SpawnIfDoesntExist1, const struct FVector& K2Node_Event_LocationToThrowAt, float K2Node_Event_ThrowSpeed, float K2Node_Event_ThrowAnglePercentage, bool K2Node_Event_RequestNewMeleeWeapon, bool K2Node_Event_SpawnIfDoesntExist, class UClass* K2Node_Event_NewMeleeWeaponClass, class AActor* CallFunc_GetHeldActor_ReturnValue, class AActor* CallFunc_GetHeldActor_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AActor* CallFunc_GetHeldActor_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, class AActor* CallFunc_GetHeldActor_ReturnValue3, bool CallFunc_IsValid_ReturnValue3);
};

}


