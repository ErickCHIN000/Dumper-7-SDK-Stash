#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Grpc.ServiceStatusFunctionLibrary
// (None)

class UClass* UServiceStatusFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ServiceStatusFunctionLibrary");

	return Clss;
}


// ServiceStatusFunctionLibrary Grpc.Default__ServiceStatusFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UServiceStatusFunctionLibrary* UServiceStatusFunctionLibrary::GetDefaultObj()
{
	static class UServiceStatusFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UServiceStatusFunctionLibrary*>(UServiceStatusFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Grpc.ServiceStatusFunctionLibrary.IsSuccess
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FOnlineServiceStatus        Status                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bIsSuccess                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UServiceStatusFunctionLibrary::IsSuccess(struct FOnlineServiceStatus& Status, bool* bIsSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServiceStatusFunctionLibrary", "IsSuccess");

	Params::UServiceStatusFunctionLibrary_IsSuccess_Params Parms{};

	Parms.Status = Status;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsSuccess != nullptr)
		*bIsSuccess = Parms.bIsSuccess;

}

}


