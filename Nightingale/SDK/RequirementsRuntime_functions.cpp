#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RequirementsRuntime.Requirement
// (None)

class UClass* URequirement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Requirement");

	return Clss;
}


// Requirement RequirementsRuntime.Default__Requirement
// (Public, ClassDefaultObject, ArchetypeObject)

class URequirement* URequirement::GetDefaultObj()
{
	static class URequirement* Default = nullptr;

	if (!Default)
		Default = static_cast<URequirement*>(URequirement::StaticClass()->DefaultObject);

	return Default;
}


// Function RequirementsRuntime.Requirement.Evaluate
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URequirement::Evaluate(class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Requirement", "Evaluate");

	Params::URequirement_Evaluate_Params Parms{};

	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RequirementsRuntime.FalseRequirement
// (None)

class UClass* UFalseRequirement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FalseRequirement");

	return Clss;
}


// FalseRequirement RequirementsRuntime.Default__FalseRequirement
// (Public, ClassDefaultObject, ArchetypeObject)

class UFalseRequirement* UFalseRequirement::GetDefaultObj()
{
	static class UFalseRequirement* Default = nullptr;

	if (!Default)
		Default = static_cast<UFalseRequirement*>(UFalseRequirement::StaticClass()->DefaultObject);

	return Default;
}


// Class RequirementsRuntime.AnyRequirement
// (None)

class UClass* UAnyRequirement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnyRequirement");

	return Clss;
}


// AnyRequirement RequirementsRuntime.Default__AnyRequirement
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnyRequirement* UAnyRequirement::GetDefaultObj()
{
	static class UAnyRequirement* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnyRequirement*>(UAnyRequirement::StaticClass()->DefaultObject);

	return Default;
}


// Class RequirementsRuntime.AllRequirement
// (None)

class UClass* UAllRequirement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AllRequirement");

	return Clss;
}


// AllRequirement RequirementsRuntime.Default__AllRequirement
// (Public, ClassDefaultObject, ArchetypeObject)

class UAllRequirement* UAllRequirement::GetDefaultObj()
{
	static class UAllRequirement* Default = nullptr;

	if (!Default)
		Default = static_cast<UAllRequirement*>(UAllRequirement::StaticClass()->DefaultObject);

	return Default;
}


// Class RequirementsRuntime.NotRequirement
// (None)

class UClass* UNotRequirement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotRequirement");

	return Clss;
}


// NotRequirement RequirementsRuntime.Default__NotRequirement
// (Public, ClassDefaultObject, ArchetypeObject)

class UNotRequirement* UNotRequirement::GetDefaultObj()
{
	static class UNotRequirement* Default = nullptr;

	if (!Default)
		Default = static_cast<UNotRequirement*>(UNotRequirement::StaticClass()->DefaultObject);

	return Default;
}


// Class RequirementsRuntime.RequirementFunctionLibrary
// (None)

class UClass* URequirementFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RequirementFunctionLibrary");

	return Clss;
}


// RequirementFunctionLibrary RequirementsRuntime.Default__RequirementFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class URequirementFunctionLibrary* URequirementFunctionLibrary::GetDefaultObj()
{
	static class URequirementFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<URequirementFunctionLibrary*>(URequirementFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function RequirementsRuntime.RequirementFunctionLibrary.EvaluateRequirement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class URequirement*                Requirement                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Protagonist                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URequirementFunctionLibrary::EvaluateRequirement(class URequirement* Requirement, class AActor* Protagonist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RequirementFunctionLibrary", "EvaluateRequirement");

	Params::URequirementFunctionLibrary_EvaluateRequirement_Params Parms{};

	Parms.Requirement = Requirement;
	Parms.Protagonist = Protagonist;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RequirementsRuntime.TrueRequirement
// (None)

class UClass* UTrueRequirement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrueRequirement");

	return Clss;
}


// TrueRequirement RequirementsRuntime.Default__TrueRequirement
// (Public, ClassDefaultObject, ArchetypeObject)

class UTrueRequirement* UTrueRequirement::GetDefaultObj()
{
	static class UTrueRequirement* Default = nullptr;

	if (!Default)
		Default = static_cast<UTrueRequirement*>(UTrueRequirement::StaticClass()->DefaultObject);

	return Default;
}

}


