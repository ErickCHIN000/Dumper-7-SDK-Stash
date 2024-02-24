#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ResourceIIMProxy.BP_ResourceIIMProxy_C
// (Actor)

class UClass* ABP_ResourceIIMProxy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ResourceIIMProxy_C");

	return Clss;
}


// BP_ResourceIIMProxy_C BP_ResourceIIMProxy.Default__BP_ResourceIIMProxy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ResourceIIMProxy_C* ABP_ResourceIIMProxy_C::GetDefaultObj()
{
	static class ABP_ResourceIIMProxy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ResourceIIMProxy_C*>(ABP_ResourceIIMProxy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ResourceIIMProxy.BP_ResourceIIMProxy_C.ValidateInstance
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassedValidation                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                ValidationErrors                                                 (Parm, OutParm)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<class FText>                K2Node_MakeArray_Array_1                                         (ReferenceParm)

void ABP_ResourceIIMProxy_C::ValidateInstance(bool* PassedValidation, TArray<class FText>* ValidationErrors, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ResourceIIMProxy_C", "ValidateInstance");

	Params::ABP_ResourceIIMProxy_C_ValidateInstance_Params Parms{};

	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

	if (PassedValidation != nullptr)
		*PassedValidation = Parms.PassedValidation;

	if (ValidationErrors != nullptr)
		*ValidationErrors = std::move(Parms.ValidationErrors);

}


// Function BP_ResourceIIMProxy.BP_ResourceIIMProxy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ResourceIIMProxy_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ResourceIIMProxy_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ResourceIIMProxy.BP_ResourceIIMProxy_C.ExecuteUbergraph_BP_ResourceIIMProxy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ResourceIIMProxy_C::ExecuteUbergraph_BP_ResourceIIMProxy(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ResourceIIMProxy_C", "ExecuteUbergraph_BP_ResourceIIMProxy");

	Params::ABP_ResourceIIMProxy_C_ExecuteUbergraph_BP_ResourceIIMProxy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


