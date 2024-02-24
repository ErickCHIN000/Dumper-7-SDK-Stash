#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3C8 - 0x3B0)
// BlueprintGeneratedClass AIShieldSpawningComponent.AIShieldSpawningComponent_C
class UAIShieldSpawningComponent_C : public UAIHeldActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(Transient, DuplicateTransient)
	class AActor*                                MyShield;                                          // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 MyPawn;                                            // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIShieldSpawningComponent_C* GetDefaultObj();

	void AIShield_Spawn();
	void AIShield_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, class FName TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist);
	void AIShield_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, class FName ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist);
	void AIShield_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewShield, bool SpawnIfDoesntExist);
	void AIShield_Drop(bool RequestNewShield);
	void AIShield_SetNewShieldClass(class UClass* NewShieldClass);
	void ExecuteUbergraph_AIShieldSpawningComponent(int32 EntryPoint, float K2Node_Event_ThrowSpeed2, float K2Node_Event_ThrowAnglePercent, class FName K2Node_Event_TargetSocket, const struct FVector& K2Node_Event_TargetOffset, const struct FRotator& K2Node_Event_ThrowAngleOffset1, float K2Node_Event_MaxPrediction1, bool K2Node_Event_RequestNewShield3, bool K2Node_Event_SpawnIfDoesntExist2, class AActor* K2Node_Event_ActorToThrowAt, float K2Node_Event_ThrowSpeed1, float K2Node_Event_ThrowAnglePercentage1, class FName K2Node_Event_ActorSocket, const struct FVector& K2Node_Event_ActorOffset, const struct FRotator& K2Node_Event_ThrowAngleOffset, float K2Node_Event_MaxPrediction, bool K2Node_Event_RequestNewShield2, bool K2Node_Event_SpawnIfDoesntExist1, const struct FVector& K2Node_Event_LocationToThrowAt, float K2Node_Event_ThrowSpeed, float K2Node_Event_ThrowAnglePercentage, bool K2Node_Event_RequestNewShield1, bool K2Node_Event_SpawnIfDoesntExist, bool K2Node_Event_RequestNewShield, class UClass* K2Node_Event_NewShieldClass, class AActor* CallFunc_GetHeldActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetHeldActor_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class AActor* CallFunc_GetHeldActor_ReturnValue2, class AActor* CallFunc_GetHeldActor_ReturnValue3, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3);
};

}


