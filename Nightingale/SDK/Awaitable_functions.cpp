#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Awaitable.AwaitableLibrary
// (None)

class UClass* UAwaitableLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AwaitableLibrary");

	return Clss;
}


// AwaitableLibrary Awaitable.Default__AwaitableLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAwaitableLibrary* UAwaitableLibrary::GetDefaultObj()
{
	static class UAwaitableLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAwaitableLibrary*>(UAwaitableLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Awaitable.AwaitableLibrary.StopAwaitingBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class IAwaitable> Awaitable                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDelegateHandleBPWrapper    Handle                                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAwaitableLibrary::StopAwaitingBP(TScriptInterface<class IAwaitable>& Awaitable, struct FDelegateHandleBPWrapper& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AwaitableLibrary", "StopAwaitingBP");

	Params::UAwaitableLibrary_StopAwaitingBP_Params Parms{};

	Parms.Awaitable = Awaitable;
	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Awaitable.AwaitableLibrary.AwaitBPTimed
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class IAwaitable> Awaitable                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnReadyDelegate                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDelegateHandleBPWrapper    Handle                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                     Outer                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAwaitableLibrary::AwaitBPTimed(TScriptInterface<class IAwaitable>& Awaitable, FDelegateProperty_& OnReadyDelegate, float Timeout, struct FDelegateHandleBPWrapper* Handle, class UObject* Outer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AwaitableLibrary", "AwaitBPTimed");

	Params::UAwaitableLibrary_AwaitBPTimed_Params Parms{};

	Parms.Awaitable = Awaitable;
	Parms.OnReadyDelegate = OnReadyDelegate;
	Parms.Timeout = Timeout;
	Parms.Outer = Outer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Handle != nullptr)
		*Handle = std::move(Parms.Handle);

}


// Function Awaitable.AwaitableLibrary.AwaitBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class IAwaitable> Awaitable                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnReadyDelegate                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDelegateHandleBPWrapper    Handle                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                     Outer                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAwaitableLibrary::AwaitBP(TScriptInterface<class IAwaitable>& Awaitable, FDelegateProperty_& OnReadyDelegate, struct FDelegateHandleBPWrapper* Handle, class UObject* Outer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AwaitableLibrary", "AwaitBP");

	Params::UAwaitableLibrary_AwaitBP_Params Parms{};

	Parms.Awaitable = Awaitable;
	Parms.OnReadyDelegate = OnReadyDelegate;
	Parms.Outer = Outer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Handle != nullptr)
		*Handle = std::move(Parms.Handle);

}


// Function Awaitable.AwaitableLibrary.AwaitAllBPTimed
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<TScriptInterface<class IAwaitable>>Awaitables                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnReadyDelegate                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IAwaitable> Awaitable                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDelegateHandleBPWrapper    Handle                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                     Outer                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAwaitableLibrary::AwaitAllBPTimed(TArray<TScriptInterface<class IAwaitable>>& Awaitables, FDelegateProperty_& OnReadyDelegate, float Timeout, TScriptInterface<class IAwaitable>* Awaitable, struct FDelegateHandleBPWrapper* Handle, class UObject* Outer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AwaitableLibrary", "AwaitAllBPTimed");

	Params::UAwaitableLibrary_AwaitAllBPTimed_Params Parms{};

	Parms.Awaitables = Awaitables;
	Parms.OnReadyDelegate = OnReadyDelegate;
	Parms.Timeout = Timeout;
	Parms.Outer = Outer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Awaitable != nullptr)
		*Awaitable = Parms.Awaitable;

	if (Handle != nullptr)
		*Handle = std::move(Parms.Handle);

}


// Function Awaitable.AwaitableLibrary.AwaitAllBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<TScriptInterface<class IAwaitable>>Awaitables                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnReadyDelegate                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IAwaitable> Awaitable                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDelegateHandleBPWrapper    Handle                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                     Outer                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAwaitableLibrary::AwaitAllBP(TArray<TScriptInterface<class IAwaitable>>& Awaitables, FDelegateProperty_& OnReadyDelegate, TScriptInterface<class IAwaitable>* Awaitable, struct FDelegateHandleBPWrapper* Handle, class UObject* Outer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AwaitableLibrary", "AwaitAllBP");

	Params::UAwaitableLibrary_AwaitAllBP_Params Parms{};

	Parms.Awaitables = Awaitables;
	Parms.OnReadyDelegate = OnReadyDelegate;
	Parms.Outer = Outer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Awaitable != nullptr)
		*Awaitable = Parms.Awaitable;

	if (Handle != nullptr)
		*Handle = std::move(Parms.Handle);

}


// Class Awaitable.BasicAwaiter
// (None)

class UClass* UBasicAwaiter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasicAwaiter");

	return Clss;
}


// BasicAwaiter Awaitable.Default__BasicAwaiter
// (Public, ClassDefaultObject, ArchetypeObject)

class UBasicAwaiter* UBasicAwaiter::GetDefaultObj()
{
	static class UBasicAwaiter* Default = nullptr;

	if (!Default)
		Default = static_cast<UBasicAwaiter*>(UBasicAwaiter::StaticClass()->DefaultObject);

	return Default;
}


// Function Awaitable.BasicAwaiter.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBasicAwaiter::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicAwaiter", "Reset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Awaitable.BasicAwaiter.Ready
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBasicAwaiter::Ready()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicAwaiter", "Ready");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Awaitable.DelayedRegistrationComponent
// (None)

class UClass* UDelayedRegistrationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DelayedRegistrationComponent");

	return Clss;
}


// DelayedRegistrationComponent Awaitable.Default__DelayedRegistrationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDelayedRegistrationComponent* UDelayedRegistrationComponent::GetDefaultObj()
{
	static class UDelayedRegistrationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDelayedRegistrationComponent*>(UDelayedRegistrationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Awaitable.Awaitable
// (None)

class UClass* IAwaitable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Awaitable");

	return Clss;
}


// Awaitable Awaitable.Default__Awaitable
// (Public, ClassDefaultObject, ArchetypeObject)

class IAwaitable* IAwaitable::GetDefaultObj()
{
	static class IAwaitable* Default = nullptr;

	if (!Default)
		Default = static_cast<IAwaitable*>(IAwaitable::StaticClass()->DefaultObject);

	return Default;
}


// Class Awaitable.MultiAwaiter
// (None)

class UClass* UMultiAwaiter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiAwaiter");

	return Clss;
}


// MultiAwaiter Awaitable.Default__MultiAwaiter
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiAwaiter* UMultiAwaiter::GetDefaultObj()
{
	static class UMultiAwaiter* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiAwaiter*>(UMultiAwaiter::StaticClass()->DefaultObject);

	return Default;
}

}


