#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildModeFeedbackComponent.BP_BuildModeFeedbackComponent_C
// (None)

class UClass* UBP_BuildModeFeedbackComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildModeFeedbackComponent_C");

	return Clss;
}


// BP_BuildModeFeedbackComponent_C BP_BuildModeFeedbackComponent.Default__BP_BuildModeFeedbackComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BuildModeFeedbackComponent_C* UBP_BuildModeFeedbackComponent_C::GetDefaultObj()
{
	static class UBP_BuildModeFeedbackComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BuildModeFeedbackComponent_C*>(UBP_BuildModeFeedbackComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildModeFeedbackComponent.BP_BuildModeFeedbackComponent_C.BuildContexts
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EBuildModeInput, enum class EBuildModeAction>TargetMap                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBP_BuildModeFeedbackData_C* NewContext                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_BuildModeFeedbackData_C* Context                                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EBuildModeInput         CurrentInput                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_BuildModeFeedbackData_C* CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildModeAction        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_BuildModeFeedbackEntry_C*CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_BuildModeFeedbackComponent_C::BuildContexts(TMap<enum class EBuildModeInput, enum class EBuildModeAction>& TargetMap, class UBP_BuildModeFeedbackData_C** NewContext, class UBP_BuildModeFeedbackData_C* Context, enum class EBuildModeInput CurrentInput, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, class UBP_BuildModeFeedbackData_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EBuildModeAction CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UBP_BuildModeFeedbackEntry_C* CallFunc_SpawnObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildModeFeedbackComponent_C", "BuildContexts");

	Params::UBP_BuildModeFeedbackComponent_C_BuildContexts_Params Parms{};

	Parms.TargetMap = TargetMap;
	Parms.Context = Context;
	Parms.CurrentInput = CurrentInput;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (NewContext != nullptr)
		*NewContext = Parms.NewContext;

}


// Function BP_BuildModeFeedbackComponent.BP_BuildModeFeedbackComponent_C.SetMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBuildModeContext       Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BuildModeFeedbackComponent_C::SetMode(enum class EBuildModeContext Context, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildModeFeedbackComponent_C", "SetMode");

	Params::UBP_BuildModeFeedbackComponent_C_SetMode_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildModeFeedbackComponent.BP_BuildModeFeedbackComponent_C.Set Action Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBuildModeAction        Action                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetActionEnabled_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BuildModeFeedbackComponent_C::Set_Action_Enabled(enum class EBuildModeAction Action, bool Enabled, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetActionEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildModeFeedbackComponent_C", "Set Action Enabled");

	Params::UBP_BuildModeFeedbackComponent_C_Set_Action_Enabled_Params Parms{};

	Parms.Action = Action;
	Parms.Enabled = Enabled;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetActionEnabled_ReturnValue = CallFunc_SetActionEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildModeFeedbackComponent.BP_BuildModeFeedbackComponent_C.PushContextChangedEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_BuildModeFeedbackComponent_C::PushContextChangedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildModeFeedbackComponent_C", "PushContextChangedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildModeFeedbackComponent.BP_BuildModeFeedbackComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_BuildModeFeedbackComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildModeFeedbackComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildModeFeedbackComponent.BP_BuildModeFeedbackComponent_C.ExecuteUbergraph_BP_BuildModeFeedbackComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_BuildModeFeedbackData_C* CallFunc_BuildContexts_NewContext                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_BuildModeFeedbackData_C* CallFunc_BuildContexts_NewContext_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_BuildModeFeedbackComponent_C::ExecuteUbergraph_BP_BuildModeFeedbackComponent(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UBP_BuildModeFeedbackData_C* CallFunc_BuildContexts_NewContext, class UBP_BuildModeFeedbackData_C* CallFunc_BuildContexts_NewContext_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildModeFeedbackComponent_C", "ExecuteUbergraph_BP_BuildModeFeedbackComponent");

	Params::UBP_BuildModeFeedbackComponent_C_ExecuteUbergraph_BP_BuildModeFeedbackComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_BuildContexts_NewContext = CallFunc_BuildContexts_NewContext;
	Parms.CallFunc_BuildContexts_NewContext_1 = CallFunc_BuildContexts_NewContext_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildModeFeedbackComponent.BP_BuildModeFeedbackComponent_C.OnBuildModeContextChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_BuildModeFeedbackData_C* Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EBuildModeContext       Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BuildModeFeedbackComponent_C::OnBuildModeContextChanged__DelegateSignature(class UBP_BuildModeFeedbackData_C* Data, enum class EBuildModeContext Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildModeFeedbackComponent_C", "OnBuildModeContextChanged__DelegateSignature");

	Params::UBP_BuildModeFeedbackComponent_C_OnBuildModeContextChanged__DelegateSignature_Params Parms{};

	Parms.Data = Data;
	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);

}

}


