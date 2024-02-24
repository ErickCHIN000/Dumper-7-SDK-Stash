#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SMExtendedRuntime.SMExtendedGraphPropertyHelpers
// (None)

class UClass* USMExtendedGraphPropertyHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMExtendedGraphPropertyHelpers");

	return Clss;
}


// SMExtendedGraphPropertyHelpers SMExtendedRuntime.Default__SMExtendedGraphPropertyHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class USMExtendedGraphPropertyHelpers* USMExtendedGraphPropertyHelpers::GetDefaultObj()
{
	static class USMExtendedGraphPropertyHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<USMExtendedGraphPropertyHelpers*>(USMExtendedGraphPropertyHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Function SMExtendedRuntime.SMExtendedGraphPropertyHelpers.ObjectToText
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     InObject                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InFunctionName                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText USMExtendedGraphPropertyHelpers::ObjectToText(class UObject* InObject, class FName InFunctionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMExtendedGraphPropertyHelpers", "ObjectToText");

	Params::USMExtendedGraphPropertyHelpers_ObjectToText_Params Parms{};

	Parms.InObject = InObject;
	Parms.InFunctionName = InFunctionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMExtendedRuntime.SMExtendedGraphPropertyHelpers.BreakTextGraphProperty
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSMTextGraphProperty        GraphProperty                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Result                                                           (Parm, OutParm, NativeAccessSpecifierPublic)

void USMExtendedGraphPropertyHelpers::BreakTextGraphProperty(struct FSMTextGraphProperty& GraphProperty, class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMExtendedGraphPropertyHelpers", "BreakTextGraphProperty");

	Params::USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Params Parms{};

	Parms.GraphProperty = GraphProperty;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


