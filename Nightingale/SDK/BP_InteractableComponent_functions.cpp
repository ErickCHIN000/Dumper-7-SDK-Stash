#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InteractableComponent.BP_InteractableComponent_C
// (None)

class UClass* UBP_InteractableComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InteractableComponent_C");

	return Clss;
}


// BP_InteractableComponent_C BP_InteractableComponent.Default__BP_InteractableComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InteractableComponent_C* UBP_InteractableComponent_C::GetDefaultObj()
{
	static class UBP_InteractableComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InteractableComponent_C*>(UBP_InteractableComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InteractableComponent.BP_InteractableComponent_C.GetEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractableComponent_C::GetEnabled(bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractableComponent_C", "GetEnabled");

	Params::UBP_InteractableComponent_C_GetEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function BP_InteractableComponent.BP_InteractableComponent_C.SetDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_InteractableComponent_C::SetDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractableComponent_C", "SetDisabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InteractableComponent.BP_InteractableComponent_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_InteractableComponent_C::SetEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractableComponent_C", "SetEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InteractableComponent.BP_InteractableComponent_C.UseInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractableComponent_C::UseInteraction(bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractableComponent_C", "UseInteraction");

	Params::UBP_InteractableComponent_C_UseInteraction_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


