#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_ControllerAudio.BPI_ControllerAudio_C
class IBPI_ControllerAudio_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_ControllerAudio_C* GetDefaultObj();

	void SpawnDualSenseAudio_Full2D(class USoundBase* Sound, float Volume, float Pitch, float StartTime);
	void SpawnDualSenseAudio(const struct FVector& Location, enum class Enum_ControllerAudio_Type SoundType, class USoundBase* Sound, float SoundVolume, enum class Enum_ControllerAudio_Type VibrationType, class USoundBase* Vibration, float VibrationVolume, bool AttachToComponent, bool UseSocketLocation, class FName SocketName);
};

}


