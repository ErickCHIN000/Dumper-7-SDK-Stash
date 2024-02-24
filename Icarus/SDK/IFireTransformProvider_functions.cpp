#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IFireTransformProvider.IFireTransformProvider_C
// (None)

class UClass* IIFireTransformProvider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IFireTransformProvider_C");

	return Clss;
}


// IFireTransformProvider_C IFireTransformProvider.Default__IFireTransformProvider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIFireTransformProvider_C* IIFireTransformProvider_C::GetDefaultObj()
{
	static class IIFireTransformProvider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIFireTransformProvider_C*>(IIFireTransformProvider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IFireTransformProvider.IFireTransformProvider_C.GetFireTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  FireTransform                                                    (Parm, OutParm, IsPlainOldData, NoDestructor)

void IIFireTransformProvider_C::GetFireTransform(bool* Success, struct FTransform* FireTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFireTransformProvider_C", "GetFireTransform");

	Params::IIFireTransformProvider_C_GetFireTransform_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (FireTransform != nullptr)
		*FireTransform = std::move(Parms.FireTransform);

}

}


