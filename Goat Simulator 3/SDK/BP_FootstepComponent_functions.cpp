#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FootstepComponent.BP_FootstepComponent_C
// (None)

class UClass* UBP_FootstepComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FootstepComponent_C");

	return Clss;
}


// BP_FootstepComponent_C BP_FootstepComponent.Default__BP_FootstepComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FootstepComponent_C* UBP_FootstepComponent_C::GetDefaultObj()
{
	static class UBP_FootstepComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FootstepComponent_C*>(UBP_FootstepComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FootstepComponent.BP_FootstepComponent_C.GetSoundForSurface
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// enum class EPhysicalSurface        SurfaceType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSurfaceSounds              Sounds                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class USoundBase*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USoundBase* UBP_FootstepComponent_C::GetSoundForSurface(enum class EPhysicalSurface SurfaceType, struct FSurfaceSounds& Sounds, enum class EPhysicalSurface Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FootstepComponent_C", "GetSoundForSurface");

	Params::UBP_FootstepComponent_C_GetSoundForSurface_Params Parms{};

	Parms.SurfaceType = SurfaceType;
	Parms.Sounds = Sounds;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


