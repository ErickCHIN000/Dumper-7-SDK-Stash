#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CSN_FootIK.CSNAnimationLibrary
// (None)

class UClass* UCSNAnimationLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CSNAnimationLibrary");

	return Clss;
}


// CSNAnimationLibrary CSN_FootIK.Default__CSNAnimationLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UCSNAnimationLibrary* UCSNAnimationLibrary::GetDefaultObj()
{
	static class UCSNAnimationLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UCSNAnimationLibrary*>(UCSNAnimationLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class CSN_FootIK.CSNSubAnimInstanceFootIK
// (None)

class UClass* UCSNSubAnimInstanceFootIK::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CSNSubAnimInstanceFootIK");

	return Clss;
}


// CSNSubAnimInstanceFootIK CSN_FootIK.Default__CSNSubAnimInstanceFootIK
// (Public, ClassDefaultObject, ArchetypeObject)

class UCSNSubAnimInstanceFootIK* UCSNSubAnimInstanceFootIK::GetDefaultObj()
{
	static class UCSNSubAnimInstanceFootIK* Default = nullptr;

	if (!Default)
		Default = static_cast<UCSNSubAnimInstanceFootIK*>(UCSNSubAnimInstanceFootIK::StaticClass()->DefaultObject);

	return Default;
}


// Class CSN_FootIK.CSNVisualDebuggingLibrary
// (None)

class UClass* UCSNVisualDebuggingLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CSNVisualDebuggingLibrary");

	return Clss;
}


// CSNVisualDebuggingLibrary CSN_FootIK.Default__CSNVisualDebuggingLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UCSNVisualDebuggingLibrary* UCSNVisualDebuggingLibrary::GetDefaultObj()
{
	static class UCSNVisualDebuggingLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UCSNVisualDebuggingLibrary*>(UCSNVisualDebuggingLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function CSN_FootIK.CSNVisualDebuggingLibrary.SetHUD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AHUD*                        TheHUD                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCSNVisualDebuggingLibrary::SetHUD(class AHUD* TheHUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CSNVisualDebuggingLibrary", "SetHUD");

	Params::UCSNVisualDebuggingLibrary_SetHUD_Params Parms{};

	Parms.TheHUD = TheHUD;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CSN_FootIK.CSNVisualDebuggingLibrary.RemoveDebugInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCSNVisualDebuggingLibrary::RemoveDebugInfo(int32 Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CSNVisualDebuggingLibrary", "RemoveDebugInfo");

	Params::UCSNVisualDebuggingLibrary_RemoveDebugInfo_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CSN_FootIK.CSNVisualDebuggingLibrary.GetNewVisualDebugStringKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCSNVisualDebuggingLibrary::GetNewVisualDebugStringKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CSNVisualDebuggingLibrary", "GetNewVisualDebugStringKey");

	Params::UCSNVisualDebuggingLibrary_GetNewVisualDebugStringKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CSN_FootIK.CSNVisualDebuggingLibrary.AddOrReplaceDebugInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCSNVisualDebugInfo         DebugInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAppendToText                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCSNVisualDebuggingLibrary::AddOrReplaceDebugInfo(int32 Key, struct FCSNVisualDebugInfo& DebugInfo, bool bAppendToText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CSNVisualDebuggingLibrary", "AddOrReplaceDebugInfo");

	Params::UCSNVisualDebuggingLibrary_AddOrReplaceDebugInfo_Params Parms{};

	Parms.Key = Key;
	Parms.DebugInfo = DebugInfo;
	Parms.bAppendToText = bAppendToText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


