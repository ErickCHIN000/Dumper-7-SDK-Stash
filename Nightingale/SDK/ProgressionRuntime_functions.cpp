#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ProgressionRuntime.PowerLevelFunctionLibrary
// (None)

class UClass* UPowerLevelFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PowerLevelFunctionLibrary");

	return Clss;
}


// PowerLevelFunctionLibrary ProgressionRuntime.Default__PowerLevelFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UPowerLevelFunctionLibrary* UPowerLevelFunctionLibrary::GetDefaultObj()
{
	static class UPowerLevelFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UPowerLevelFunctionLibrary*>(UPowerLevelFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ProgressionRuntime.PowerLevelFunctionLibrary.LessThan_FPowerLevel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPowerLevel                 A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPowerLevel                 B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPowerLevelFunctionLibrary::LessThan_FPowerLevel(struct FPowerLevel& A, struct FPowerLevel& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerLevelFunctionLibrary", "LessThan_FPowerLevel");

	Params::UPowerLevelFunctionLibrary_LessThan_FPowerLevel_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProgressionRuntime.PowerLevelFunctionLibrary.LessEqual_FPowerLevel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPowerLevel                 A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPowerLevel                 B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPowerLevelFunctionLibrary::LessEqual_FPowerLevel(struct FPowerLevel& A, struct FPowerLevel& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerLevelFunctionLibrary", "LessEqual_FPowerLevel");

	Params::UPowerLevelFunctionLibrary_LessEqual_FPowerLevel_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProgressionRuntime.PowerLevelFunctionLibrary.GreaterThan_FPowerLevel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPowerLevel                 A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPowerLevel                 B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPowerLevelFunctionLibrary::GreaterThan_FPowerLevel(struct FPowerLevel& A, struct FPowerLevel& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerLevelFunctionLibrary", "GreaterThan_FPowerLevel");

	Params::UPowerLevelFunctionLibrary_GreaterThan_FPowerLevel_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProgressionRuntime.PowerLevelFunctionLibrary.GreaterEqual_FPowerLevel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPowerLevel                 A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPowerLevel                 B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPowerLevelFunctionLibrary::GreaterEqual_FPowerLevel(struct FPowerLevel& A, struct FPowerLevel& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerLevelFunctionLibrary", "GreaterEqual_FPowerLevel");

	Params::UPowerLevelFunctionLibrary_GreaterEqual_FPowerLevel_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProgressionRuntime.PowerLevelFunctionLibrary.EqualEqual_FPowerLevel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPowerLevel                 A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPowerLevel                 B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPowerLevelFunctionLibrary::EqualEqual_FPowerLevel(struct FPowerLevel& A, struct FPowerLevel& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerLevelFunctionLibrary", "EqualEqual_FPowerLevel");

	Params::UPowerLevelFunctionLibrary_EqualEqual_FPowerLevel_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ProgressionRuntime.PowerLevelInterface
// (None)

class UClass* IPowerLevelInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PowerLevelInterface");

	return Clss;
}


// PowerLevelInterface ProgressionRuntime.Default__PowerLevelInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IPowerLevelInterface* IPowerLevelInterface::GetDefaultObj()
{
	static class IPowerLevelInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IPowerLevelInterface*>(IPowerLevelInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function ProgressionRuntime.PowerLevelInterface.GetPowerLevel
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FPowerLevel                 OutPowerLevel                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IPowerLevelInterface::GetPowerLevel(struct FPowerLevel* OutPowerLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerLevelInterface", "GetPowerLevel");

	Params::IPowerLevelInterface_GetPowerLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPowerLevel != nullptr)
		*OutPowerLevel = std::move(Parms.OutPowerLevel);

	return Parms.ReturnValue;

}

}


