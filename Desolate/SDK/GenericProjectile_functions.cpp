#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericProjectile.GenericProjectile_C
// (Actor)

class UClass* AGenericProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericProjectile_C");

	return Clss;
}


// GenericProjectile_C GenericProjectile.Default__GenericProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericProjectile_C* AGenericProjectile_C::GetDefaultObj()
{
	static class AGenericProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericProjectile_C*>(AGenericProjectile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericProjectile.GenericProjectile_C.GetSelectionInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Selection                Result                                                           (Parm, OutParm, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_DynamicCast_AsSHPlayer_Character                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetDisassembleMoney_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Selection                K2Node_MakeStruct_S_Selection                                    (HasGetValueTypeHash)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGenericItem_C*              K2Node_DynamicCast_AsGeneric_Item                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectionInfo_C>CallFunc_GetSelectionInfo_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_Selection                CallFunc_GetSelectionInfo_result                                 (HasGetValueTypeHash)
// struct FS_Selection                K2Node_MakeStruct_S_Selection_1                                  (HasGetValueTypeHash)

void AGenericProjectile_C::GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetDisassembleMoney_ReturnValue, const struct FS_Selection& K2Node_MakeStruct_S_Selection, class UObject* CallFunc_GetDefaultObject_ReturnValue, class AGenericItem_C* K2Node_DynamicCast_AsGeneric_Item, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class ISelectionInfo_C> CallFunc_GetSelectionInfo_self_CastInput, const struct FS_Selection& CallFunc_GetSelectionInfo_result, const struct FS_Selection& K2Node_MakeStruct_S_Selection_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericProjectile_C", "GetSelectionInfo");

	Params::AGenericProjectile_C_GetSelectionInfo_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.K2Node_DynamicCast_AsSHPlayer_Character = K2Node_DynamicCast_AsSHPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetDisassembleMoney_ReturnValue = CallFunc_GetDisassembleMoney_ReturnValue;
	Parms.K2Node_MakeStruct_S_Selection = K2Node_MakeStruct_S_Selection;
	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsGeneric_Item = K2Node_DynamicCast_AsGeneric_Item;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSelectionInfo_self_CastInput = CallFunc_GetSelectionInfo_self_CastInput;
	Parms.CallFunc_GetSelectionInfo_result = CallFunc_GetSelectionInfo_result;
	Parms.K2Node_MakeStruct_S_Selection_1 = K2Node_MakeStruct_S_Selection_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}

}


