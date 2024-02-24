#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_ControllerAudio.BPI_ControllerAudio_C
// (None)

class UClass* IBPI_ControllerAudio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ControllerAudio_C");

	return Clss;
}


// BPI_ControllerAudio_C BPI_ControllerAudio.Default__BPI_ControllerAudio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ControllerAudio_C* IBPI_ControllerAudio_C::GetDefaultObj()
{
	static class IBPI_ControllerAudio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ControllerAudio_C*>(IBPI_ControllerAudio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ControllerAudio.BPI_ControllerAudio_C.SpawnDualSenseAudio_Full2D
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Pitch                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ControllerAudio_C::SpawnDualSenseAudio_Full2D(class USoundBase* Sound, float Volume, float Pitch, float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ControllerAudio_C", "SpawnDualSenseAudio_Full2D");

	Params::IBPI_ControllerAudio_C_SpawnDualSenseAudio_Full2D_Params Parms{};

	Parms.Sound = Sound;
	Parms.Volume = Volume;
	Parms.Pitch = Pitch;
	Parms.StartTime = StartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_ControllerAudio.BPI_ControllerAudio_C.SpawnDualSenseAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ControllerAudio_TypeSoundType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SoundVolume                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ControllerAudio_TypeVibrationType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Vibration                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VibrationVolume                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AttachToComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseSocketLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ControllerAudio_C::SpawnDualSenseAudio(const struct FVector& Location, enum class Enum_ControllerAudio_Type SoundType, class USoundBase* Sound, float SoundVolume, enum class Enum_ControllerAudio_Type VibrationType, class USoundBase* Vibration, float VibrationVolume, bool AttachToComponent, bool UseSocketLocation, class FName SocketName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ControllerAudio_C", "SpawnDualSenseAudio");

	Params::IBPI_ControllerAudio_C_SpawnDualSenseAudio_Params Parms{};

	Parms.Location = Location;
	Parms.SoundType = SoundType;
	Parms.Sound = Sound;
	Parms.SoundVolume = SoundVolume;
	Parms.VibrationType = VibrationType;
	Parms.Vibration = Vibration;
	Parms.VibrationVolume = VibrationVolume;
	Parms.AttachToComponent = AttachToComponent;
	Parms.UseSocketLocation = UseSocketLocation;
	Parms.SocketName = SocketName;

	UObject::ProcessEvent(Func, &Parms);

}

}


