#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_Deploy_ListEntry.WBP_DB_Deploy_ListEntry_C
// (None)

class UClass* UWBP_DB_Deploy_ListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_Deploy_ListEntry_C");

	return Clss;
}


// WBP_DB_Deploy_ListEntry_C WBP_DB_Deploy_ListEntry.Default__WBP_DB_Deploy_ListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_Deploy_ListEntry_C* UWBP_DB_Deploy_ListEntry_C::GetDefaultObj()
{
	static class UWBP_DB_Deploy_ListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_Deploy_ListEntry_C*>(UWBP_DB_Deploy_ListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_Deploy_ListEntry.WBP_DB_Deploy_ListEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Deploy_ListEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Deploy_ListEntry_C", "PreConstruct");

	Params::UWBP_DB_Deploy_ListEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Deploy_ListEntry.WBP_DB_Deploy_ListEntry_C.DeploymentButtonSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Deploy_ListEntry_C::DeploymentButtonSelected(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Deploy_ListEntry_C", "DeploymentButtonSelected");

	Params::UWBP_DB_Deploy_ListEntry_C_DeploymentButtonSelected_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Deploy_ListEntry.WBP_DB_Deploy_ListEntry_C.ExecuteUbergraph_WBP_DB_Deploy_ListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Deploy_ListEntry_C::ExecuteUbergraph_WBP_DB_Deploy_ListEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_CustomEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Deploy_ListEntry_C", "ExecuteUbergraph_WBP_DB_Deploy_ListEntry");

	Params::UWBP_DB_Deploy_ListEntry_C_ExecuteUbergraph_WBP_DB_Deploy_ListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Deploy_ListEntry.WBP_DB_Deploy_ListEntry_C.DeploymentSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeployment                 Deployment                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_DB_Deploy_ListEntry_C::DeploymentSelected__DelegateSignature(const struct FDeployment& Deployment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Deploy_ListEntry_C", "DeploymentSelected__DelegateSignature");

	Params::UWBP_DB_Deploy_ListEntry_C_DeploymentSelected__DelegateSignature_Params Parms{};

	Parms.Deployment = Deployment;

	UObject::ProcessEvent(Func, &Parms);

}

}


