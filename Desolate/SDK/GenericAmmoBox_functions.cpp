#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericAmmoBox.GenericAmmoBox_C
// (Actor)

class UClass* AGenericAmmoBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericAmmoBox_C");

	return Clss;
}


// GenericAmmoBox_C GenericAmmoBox.Default__GenericAmmoBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericAmmoBox_C* AGenericAmmoBox_C::GetDefaultObj()
{
	static class AGenericAmmoBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericAmmoBox_C*>(AGenericAmmoBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericAmmoBox.GenericAmmoBox_C.GetSelectionInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Selection                Result                                                           (Parm, OutParm, HasGetValueTypeHash)
// struct FS_Selection                K2Node_MakeStruct_S_Selection                                    (HasGetValueTypeHash)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGenericItem_C*              K2Node_DynamicCast_AsGeneric_Item                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectionInfo_C>CallFunc_GetSelectionInfo_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_Selection                CallFunc_GetSelectionInfo_result                                 (HasGetValueTypeHash)
// struct FS_Selection                K2Node_MakeStruct_S_Selection_1                                  (HasGetValueTypeHash)

void AGenericAmmoBox_C::GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, const struct FS_Selection& K2Node_MakeStruct_S_Selection, class UObject* CallFunc_GetDefaultObject_ReturnValue, class AGenericItem_C* K2Node_DynamicCast_AsGeneric_Item, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ISelectionInfo_C> CallFunc_GetSelectionInfo_self_CastInput, const struct FS_Selection& CallFunc_GetSelectionInfo_result, const struct FS_Selection& K2Node_MakeStruct_S_Selection_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericAmmoBox_C", "GetSelectionInfo");

	Params::AGenericAmmoBox_C_GetSelectionInfo_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.K2Node_MakeStruct_S_Selection = K2Node_MakeStruct_S_Selection;
	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsGeneric_Item = K2Node_DynamicCast_AsGeneric_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSelectionInfo_self_CastInput = CallFunc_GetSelectionInfo_self_CastInput;
	Parms.CallFunc_GetSelectionInfo_result = CallFunc_GetSelectionInfo_result;
	Parms.K2Node_MakeStruct_S_Selection_1 = K2Node_MakeStruct_S_Selection_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function GenericAmmoBox.GenericAmmoBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGenericAmmoBox_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericAmmoBox_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericAmmoBox.GenericAmmoBox_C.ExecuteUbergraph_GenericAmmoBox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericAmmoBox_C::ExecuteUbergraph_GenericAmmoBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericAmmoBox_C", "ExecuteUbergraph_GenericAmmoBox");

	Params::AGenericAmmoBox_C_ExecuteUbergraph_GenericAmmoBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


