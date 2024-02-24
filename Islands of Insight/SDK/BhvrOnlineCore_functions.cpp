#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BhvrOnlineCore.OnlineSdkBase
// (None)

class UClass* UOnlineSdkBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineSdkBase");

	return Clss;
}


// OnlineSdkBase BhvrOnlineCore.Default__OnlineSdkBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineSdkBase* UOnlineSdkBase::GetDefaultObj()
{
	static class UOnlineSdkBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineSdkBase*>(UOnlineSdkBase::StaticClass()->DefaultObject);

	return Default;
}


// Class BhvrOnlineCore.OnlineApiBase
// (None)

class UClass* UOnlineApiBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineApiBase");

	return Clss;
}


// OnlineApiBase BhvrOnlineCore.Default__OnlineApiBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineApiBase* UOnlineApiBase::GetDefaultObj()
{
	static class UOnlineApiBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineApiBase*>(UOnlineApiBase::StaticClass()->DefaultObject);

	return Default;
}


// Class BhvrOnlineCore.OnlineBlueprintLibrary
// (None)

class UClass* UOnlineBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineBlueprintLibrary");

	return Clss;
}


// OnlineBlueprintLibrary BhvrOnlineCore.Default__OnlineBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineBlueprintLibrary* UOnlineBlueprintLibrary::GetDefaultObj()
{
	static class UOnlineBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineBlueprintLibrary*>(UOnlineBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function BhvrOnlineCore.OnlineBlueprintLibrary.Conv_OnlineStatusToInteger
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FOnlineStatus               InOnlineStatus                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UOnlineBlueprintLibrary::Conv_OnlineStatusToInteger(struct FOnlineStatus& InOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineBlueprintLibrary", "Conv_OnlineStatusToInteger");

	Params::UOnlineBlueprintLibrary_Conv_OnlineStatusToInteger_Params Parms{};

	Parms.InOnlineStatus = InOnlineStatus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BhvrOnlineCore.OnlineBlueprintLibrary.Conv_IntegerToOnlineStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              InCode                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOnlineStatus               ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FOnlineStatus UOnlineBlueprintLibrary::Conv_IntegerToOnlineStatus(int32 InCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineBlueprintLibrary", "Conv_IntegerToOnlineStatus");

	Params::UOnlineBlueprintLibrary_Conv_IntegerToOnlineStatus_Params Parms{};

	Parms.InCode = InCode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BhvrOnlineCore.OnlineSdkSubsystem
// (None)

class UClass* UOnlineSdkSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineSdkSubsystem");

	return Clss;
}


// OnlineSdkSubsystem BhvrOnlineCore.Default__OnlineSdkSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineSdkSubsystem* UOnlineSdkSubsystem::GetDefaultObj()
{
	static class UOnlineSdkSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineSdkSubsystem*>(UOnlineSdkSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function BhvrOnlineCore.OnlineSdkSubsystem.GetOnlineSdk
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UOnlineSdkBase>  InOnlineSdkClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                InGameplayTag                                                    (Parm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOnlineSdkBase*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnlineSdkBase* UOnlineSdkSubsystem::GetOnlineSdk(TSubclassOf<class UOnlineSdkBase> InOnlineSdkClass, const struct FGameplayTag& InGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSdkSubsystem", "GetOnlineSdk");

	Params::UOnlineSdkSubsystem_GetOnlineSdk_Params Parms{};

	Parms.InOnlineSdkClass = InOnlineSdkClass;
	Parms.InGameplayTag = InGameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


