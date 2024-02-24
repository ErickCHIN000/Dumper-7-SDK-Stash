#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_DebugEnvAudio.CF_DebugEnvAudio_C
// (None)

class UClass* UCF_DebugEnvAudio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_DebugEnvAudio_C");

	return Clss;
}


// CF_DebugEnvAudio_C CF_DebugEnvAudio.Default__CF_DebugEnvAudio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_DebugEnvAudio_C* UCF_DebugEnvAudio_C::GetDefaultObj()
{
	static class UCF_DebugEnvAudio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_DebugEnvAudio_C*>(UCF_DebugEnvAudio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_DebugEnvAudio.CF_DebugEnvAudio_C.OnLoaded_43E5AE7649FE7C4CA097089BA18583CB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UCF_DebugEnvAudio_C::OnLoaded_43E5AE7649FE7C4CA097089BA18583CB(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugEnvAudio_C", "OnLoaded_43E5AE7649FE7C4CA097089BA18583CB");

	Params::UCF_DebugEnvAudio_C_OnLoaded_43E5AE7649FE7C4CA097089BA18583CB_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_DebugEnvAudio.CF_DebugEnvAudio_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_DebugEnvAudio_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugEnvAudio_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_DebugEnvAudio.CF_DebugEnvAudio_C.ExecuteUbergraph_CF_DebugEnvAudio
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsUser_Widget                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_DebugEnvAudio_C::ExecuteUbergraph_CF_DebugEnvAudio(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugEnvAudio_C", "ExecuteUbergraph_CF_DebugEnvAudio");

	Params::UCF_DebugEnvAudio_C_ExecuteUbergraph_CF_DebugEnvAudio_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsUser_Widget = K2Node_ClassDynamicCast_AsUser_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


