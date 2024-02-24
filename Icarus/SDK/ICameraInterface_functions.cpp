#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ICameraInterface.ICameraInterface_C
// (None)

class UClass* IICameraInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ICameraInterface_C");

	return Clss;
}


// ICameraInterface_C ICameraInterface.Default__ICameraInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IICameraInterface_C* IICameraInterface_C::GetDefaultObj()
{
	static class IICameraInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IICameraInterface_C*>(IICameraInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ICameraInterface.ICameraInterface_C.UpdateCamera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     InLocation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    InRotation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              InFOV                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceUpdate                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    OutRotation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              OutFOV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IICameraInterface_C::UpdateCamera(const struct FVector& InLocation, const struct FRotator& InRotation, float InFOV, bool ForceUpdate, struct FVector* OutLocation, struct FRotator* OutRotation, float* OutFOV, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICameraInterface_C", "UpdateCamera");

	Params::IICameraInterface_C_UpdateCamera_Params Parms{};

	Parms.InLocation = InLocation;
	Parms.InRotation = InRotation;
	Parms.InFOV = InFOV;
	Parms.ForceUpdate = ForceUpdate;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	if (OutRotation != nullptr)
		*OutRotation = std::move(Parms.OutRotation);

	if (OutFOV != nullptr)
		*OutFOV = Parms.OutFOV;

	if (Return != nullptr)
		*Return = Parms.Return;

}

}


