#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Gliding.BPFL_Gliding_C
class UBPFL_Gliding_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Gliding_C* GetDefaultObj();

	void EndGlide(class ABP_Character_C* Character, class UObject* __WorldContext);
	void GlideTick(class ABP_Character_C* Character, double DeltaTime, class UObject* __WorldContext, double Roll, double PitchFactor, class UAudioComponent* WindSoundPlayer, class UWBP_Temp_GlideSpeed_C* GlidingSpeedWidget, double Drag, double DescentSpeed, double Pitch, double XYAngularDifference, int32 MaximumSpeed, class AController* Controller, int32 XYAcceleration, const struct FVector& NewVelocity, double GroundCheckDistance, const struct FVector& PlayerLocation, class UNWX_CharacterMovementComponent* CharacterMovement);
	void StartGlide(class ABP_Character_C* Character, class UObject* __WorldContext);
};

}


