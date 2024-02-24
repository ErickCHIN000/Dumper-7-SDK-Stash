#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GFur.GFurComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGFurComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GFurComponent");

	return Clss;
}


// GFurComponent GFur.Default__GFurComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGFurComponent* UGFurComponent::GetDefaultObj()
{
	static class UGFurComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGFurComponent*>(UGFurComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GFur.GFurComponent.RegenerateFur
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGFurComponent::RegenerateFur()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFurComponent", "RegenerateFur");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GFur.GFurComponent.CheckGFurSetupIsValid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGFurComponent::CheckGFurSetupIsValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFurComponent", "CheckGFurSetupIsValid");

	Params::UGFurComponent_CheckGFurSetupIsValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GFur.FurSplines
// (None)

class UClass* UFurSplines::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FurSplines");

	return Clss;
}


// FurSplines GFur.Default__FurSplines
// (Public, ClassDefaultObject, ArchetypeObject)

class UFurSplines* UFurSplines::GetDefaultObj()
{
	static class UFurSplines* Default = nullptr;

	if (!Default)
		Default = static_cast<UFurSplines*>(UFurSplines::StaticClass()->DefaultObject);

	return Default;
}

}


