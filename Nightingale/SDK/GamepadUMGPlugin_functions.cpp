#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GamepadUMGPlugin.GamepadCursorSettings
// (None)

class UClass* UGamepadCursorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GamepadCursorSettings");

	return Clss;
}


// GamepadCursorSettings GamepadUMGPlugin.Default__GamepadCursorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGamepadCursorSettings* UGamepadCursorSettings::GetDefaultObj()
{
	static class UGamepadCursorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGamepadCursorSettings*>(UGamepadCursorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class GamepadUMGPlugin.VirtualCursorFunctionLibrary
// (None)

class UClass* UVirtualCursorFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VirtualCursorFunctionLibrary");

	return Clss;
}


// VirtualCursorFunctionLibrary GamepadUMGPlugin.Default__VirtualCursorFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UVirtualCursorFunctionLibrary* UVirtualCursorFunctionLibrary::GetDefaultObj()
{
	static class UVirtualCursorFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UVirtualCursorFunctionLibrary*>(UVirtualCursorFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVirtualCursorFunctionLibrary::IsCursorOverInteractableWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VirtualCursorFunctionLibrary", "IsCursorOverInteractableWidget");

	Params::UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.EnableVirtualCursor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PC                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVirtualCursorFunctionLibrary::EnableVirtualCursor(class APlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VirtualCursorFunctionLibrary", "EnableVirtualCursor");

	Params::UVirtualCursorFunctionLibrary_EnableVirtualCursor_Params Parms{};

	Parms.PC = PC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.DisableVirtualCursor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PC                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVirtualCursorFunctionLibrary::DisableVirtualCursor(class APlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VirtualCursorFunctionLibrary", "DisableVirtualCursor");

	Params::UVirtualCursorFunctionLibrary_DisableVirtualCursor_Params Parms{};

	Parms.PC = PC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


