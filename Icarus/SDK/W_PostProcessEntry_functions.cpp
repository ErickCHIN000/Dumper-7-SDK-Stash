#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PostProcessEntry.W_PostProcessEntry_C
// (None)

class UClass* UW_PostProcessEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PostProcessEntry_C");

	return Clss;
}


// W_PostProcessEntry_C W_PostProcessEntry.Default__W_PostProcessEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PostProcessEntry_C* UW_PostProcessEntry_C::GetDefaultObj()
{
	static class UW_PostProcessEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PostProcessEntry_C*>(UW_PostProcessEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PostProcessEntry.W_PostProcessEntry_C.IsEntryEnabled
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FFeatureLevelsRowHandle     CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFeatureLevelEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_PostProcessEntry_C::IsEntryEnabled(const struct FFeatureLevelsRowHandle& CallFunc_StructToRowHandle_ReturnValue, bool CallFunc_IsFeatureLevelEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_C", "IsEntryEnabled");

	Params::UW_PostProcessEntry_C_IsEntryEnabled_Params Parms{};

	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_IsFeatureLevelEnabled_ReturnValue = CallFunc_IsFeatureLevelEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PostProcessEntry.W_PostProcessEntry_C.InitFromDefaultValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PostProcessEntry_C::InitFromDefaultValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_C", "InitFromDefaultValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PostProcessEntry.W_PostProcessEntry_C.InitFromSaveGameValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFPostProcessSaveData       Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PostProcessEntry_C::InitFromSaveGameValue(const struct FFPostProcessSaveData& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_C", "InitFromSaveGameValue");

	Params::UW_PostProcessEntry_C_InitFromSaveGameValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PostProcessEntry.W_PostProcessEntry_C.GetSaveGameValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFPostProcessSaveData       Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PostProcessEntry_C::GetSaveGameValue(struct FFPostProcessSaveData* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_C", "GetSaveGameValue");

	Params::UW_PostProcessEntry_C_GetSaveGameValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function W_PostProcessEntry.W_PostProcessEntry_C.UpdatePostProcess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_PostProcessEntry_C::UpdatePostProcess(struct FPostProcessSettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_C", "UpdatePostProcess");

	Params::UW_PostProcessEntry_C_UpdatePostProcess_Params Parms{};

	Parms.Settings = Settings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PostProcessEntry.W_PostProcessEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PostProcessEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_C", "PreConstruct");

	Params::UW_PostProcessEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PostProcessEntry.W_PostProcessEntry_C.ExecuteUbergraph_W_PostProcessEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFeatureLevelsRowHandle     CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFeatureLevelEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PostProcessEntry_C::ExecuteUbergraph_W_PostProcessEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FFeatureLevelsRowHandle& CallFunc_StructToRowHandle_ReturnValue, bool CallFunc_IsFeatureLevelEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_C", "ExecuteUbergraph_W_PostProcessEntry");

	Params::UW_PostProcessEntry_C_ExecuteUbergraph_W_PostProcessEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_IsFeatureLevelEnabled_ReturnValue = CallFunc_IsFeatureLevelEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PostProcessEntry.W_PostProcessEntry_C.EntryFunction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_PostProcessEntry_C::EntryFunction__DelegateSignature(const class FString& Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_C", "EntryFunction__DelegateSignature");

	Params::UW_PostProcessEntry_C_EntryFunction__DelegateSignature_Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PostProcessEntry.W_PostProcessEntry_C.EntryChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PostProcessEntry_C::EntryChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_C", "EntryChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


