#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_OpenAtmosphereDebugger.CF_OpenAtmosphereDebugger_C
// (None)

class UClass* UCF_OpenAtmosphereDebugger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_OpenAtmosphereDebugger_C");

	return Clss;
}


// CF_OpenAtmosphereDebugger_C CF_OpenAtmosphereDebugger.Default__CF_OpenAtmosphereDebugger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_OpenAtmosphereDebugger_C* UCF_OpenAtmosphereDebugger_C::GetDefaultObj()
{
	static class UCF_OpenAtmosphereDebugger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_OpenAtmosphereDebugger_C*>(UCF_OpenAtmosphereDebugger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_OpenAtmosphereDebugger.CF_OpenAtmosphereDebugger_C.OnLoaded_45FB73724725AF1543AEB1BD3A7DDDA1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UCF_OpenAtmosphereDebugger_C::OnLoaded_45FB73724725AF1543AEB1BD3A7DDDA1(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_OpenAtmosphereDebugger_C", "OnLoaded_45FB73724725AF1543AEB1BD3A7DDDA1");

	Params::UCF_OpenAtmosphereDebugger_C_OnLoaded_45FB73724725AF1543AEB1BD3A7DDDA1_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_OpenAtmosphereDebugger.CF_OpenAtmosphereDebugger_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_OpenAtmosphereDebugger_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_OpenAtmosphereDebugger_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_OpenAtmosphereDebugger.CF_OpenAtmosphereDebugger_C.ExecuteUbergraph_CF_OpenAtmosphereDebugger
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsUser_Widget                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UCF_OpenAtmosphereDebugger_C::ExecuteUbergraph_CF_OpenAtmosphereDebugger(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, class UUserWidget* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_OpenAtmosphereDebugger_C", "ExecuteUbergraph_CF_OpenAtmosphereDebugger");

	Params::UCF_OpenAtmosphereDebugger_C_ExecuteUbergraph_CF_OpenAtmosphereDebugger_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsUser_Widget = K2Node_ClassDynamicCast_AsUser_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


