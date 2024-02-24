#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ini_Att_MD_SuperBadass_CrystalValue.Ini_Att_MD_SuperBadass_CrystalValue_C
// (None)

class UClass* UIni_Att_MD_SuperBadass_CrystalValue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ini_Att_MD_SuperBadass_CrystalValue_C");

	return Clss;
}


// Ini_Att_MD_SuperBadass_CrystalValue_C Ini_Att_MD_SuperBadass_CrystalValue.Default__Ini_Att_MD_SuperBadass_CrystalValue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIni_Att_MD_SuperBadass_CrystalValue_C* UIni_Att_MD_SuperBadass_CrystalValue_C::GetDefaultObj()
{
	static class UIni_Att_MD_SuperBadass_CrystalValue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIni_Att_MD_SuperBadass_CrystalValue_C*>(UIni_Att_MD_SuperBadass_CrystalValue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ini_Att_MD_SuperBadass_CrystalValue.Ini_Att_MD_SuperBadass_CrystalValue_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPChar_Player_C*            K2Node_DynamicCast_AsBPChar_Player                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UIni_Att_MD_SuperBadass_CrystalValue_C::CalculateAttributeInitialValue(class UObject* Context, class ABPChar_Player_C* K2Node_DynamicCast_AsBPChar_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ini_Att_MD_SuperBadass_CrystalValue_C", "CalculateAttributeInitialValue");

	Params::UIni_Att_MD_SuperBadass_CrystalValue_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsBPChar_Player = K2Node_DynamicCast_AsBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue = CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


