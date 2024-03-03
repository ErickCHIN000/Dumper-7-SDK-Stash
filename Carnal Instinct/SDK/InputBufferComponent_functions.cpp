#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InputBufferComponent.InputBufferComponent_C
// (None)

class UClass* UInputBufferComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputBufferComponent_C");

	return Clss;
}


// InputBufferComponent_C InputBufferComponent.Default__InputBufferComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInputBufferComponent_C* UInputBufferComponent_C::GetDefaultObj()
{
	static class UInputBufferComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputBufferComponent_C*>(UInputBufferComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InputBufferComponent.InputBufferComponent_C.GetStoredKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_InputBufferKey        StoredKey                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputBufferComponent_C::GetStoredKey(enum class E_InputBufferKey* StoredKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputBufferComponent_C", "GetStoredKey");

	Params::UInputBufferComponent_C_GetStoredKey_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StoredKey != nullptr)
		*StoredKey = Parms.StoredKey;

}


// Function InputBufferComponent.InputBufferComponent_C.CloseInputBuffer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputBufferComponent_C::CloseInputBuffer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputBufferComponent_C", "CloseInputBuffer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputBufferComponent.InputBufferComponent_C.OpenInputBuffer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputBufferComponent_C::OpenInputBuffer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputBufferComponent_C", "OpenInputBuffer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputBufferComponent.InputBufferComponent_C.UpdateKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_InputBufferKey        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputBufferComponent_C::UpdateKey(enum class E_InputBufferKey Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputBufferComponent_C", "UpdateKey");

	Params::UInputBufferComponent_C_UpdateKey_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputBufferComponent.InputBufferComponent_C.ConsumeInputBuffer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputBufferComponent_C::ConsumeInputBuffer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputBufferComponent_C", "ConsumeInputBuffer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputBufferComponent.InputBufferComponent_C.OnInputBufferClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputBufferComponent_C::OnInputBufferClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputBufferComponent_C", "OnInputBufferClose__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputBufferComponent.InputBufferComponent_C.OnInputBufferOpen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputBufferComponent_C::OnInputBufferOpen__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputBufferComponent_C", "OnInputBufferOpen__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputBufferComponent.InputBufferComponent_C.OnInputBufferConsumed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_InputBufferKey        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputBufferComponent_C::OnInputBufferConsumed__DelegateSignature(enum class E_InputBufferKey Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputBufferComponent_C", "OnInputBufferConsumed__DelegateSignature");

	Params::UInputBufferComponent_C_OnInputBufferConsumed__DelegateSignature_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}

}


