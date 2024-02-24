#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_SR_DAL_Tiabolt.BPWeap_SR_DAL_Tiabolt_C
// (Actor)

class UClass* ABPWeap_SR_DAL_Tiabolt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_SR_DAL_Tiabolt_C");

	return Clss;
}


// BPWeap_SR_DAL_Tiabolt_C BPWeap_SR_DAL_Tiabolt.Default__BPWeap_SR_DAL_Tiabolt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_SR_DAL_Tiabolt_C* ABPWeap_SR_DAL_Tiabolt_C::GetDefaultObj()
{
	static class ABPWeap_SR_DAL_Tiabolt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_SR_DAL_Tiabolt_C*>(ABPWeap_SR_DAL_Tiabolt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_SR_DAL_Tiabolt.BPWeap_SR_DAL_Tiabolt_C.GetMode2DamageTypes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DamageType02                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      DamageType03                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ThirdDamageType                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      SecondDamageType                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LookUpIndex                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_SR_DAL_Tiabolt_C::GetMode2DamageTypes(class UClass** DamageType02, class UClass** DamageType03, class UClass* ThirdDamageType, class UClass* SecondDamageType, int32 LookUpIndex, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Percent_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Percent_IntInt_ReturnValue1, class UClass* CallFunc_Array_Get_Item1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SR_DAL_Tiabolt_C", "GetMode2DamageTypes");

	Params::ABPWeap_SR_DAL_Tiabolt_C_GetMode2DamageTypes_Params Parms{};

	Parms.ThirdDamageType = ThirdDamageType;
	Parms.SecondDamageType = SecondDamageType;
	Parms.LookUpIndex = LookUpIndex;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Percent_IntInt_ReturnValue1 = CallFunc_Percent_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageType02 != nullptr)
		*DamageType02 = Parms.DamageType02;

	if (DamageType03 != nullptr)
		*DamageType03 = Parms.DamageType03;

}


// Function BPWeap_SR_DAL_Tiabolt.BPWeap_SR_DAL_Tiabolt_C.Init_DamageTypes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfAttribute_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxDamageType*              CallFunc_GetDamageType_ReturnValue                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_SR_DAL_Tiabolt_C::Init_DamageTypes(class UClass* CallFunc_Array_Get_Item, TArray<class UClass*>& K2Node_MakeArray_Array, float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, int32 CallFunc_FTrunc_ReturnValue1, class UClass* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, class UGbxDamageType* CallFunc_GetDamageType_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SR_DAL_Tiabolt_C", "Init_DamageTypes");

	Params::ABPWeap_SR_DAL_Tiabolt_C_Init_DamageTypes_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue1 = CallFunc_GetValueOfAttribute_ReturnValue1;
	Parms.CallFunc_FTrunc_ReturnValue1 = CallFunc_FTrunc_ReturnValue1;
	Parms.CallFunc_Map_Find_Value1 = CallFunc_Map_Find_Value1;
	Parms.CallFunc_Map_Find_ReturnValue1 = CallFunc_Map_Find_ReturnValue1;
	Parms.CallFunc_GetDamageType_ReturnValue = CallFunc_GetDamageType_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_SR_DAL_Tiabolt.BPWeap_SR_DAL_Tiabolt_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_SR_DAL_Tiabolt_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SR_DAL_Tiabolt_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SR_DAL_Tiabolt.BPWeap_SR_DAL_Tiabolt_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPWeap_SR_DAL_Tiabolt_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SR_DAL_Tiabolt_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SR_DAL_Tiabolt.BPWeap_SR_DAL_Tiabolt_C.Tiabolt_OnReload
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     EventWeapon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCompleted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoGiven                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_SR_DAL_Tiabolt_C::Tiabolt_OnReload(class AWeapon* EventWeapon, bool bCompleted, bool bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SR_DAL_Tiabolt_C", "Tiabolt_OnReload");

	Params::ABPWeap_SR_DAL_Tiabolt_C_Tiabolt_OnReload_Params Parms{};

	Parms.EventWeapon = EventWeapon;
	Parms.bCompleted = bCompleted;
	Parms.bAmmoGiven = bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_SR_DAL_Tiabolt.BPWeap_SR_DAL_Tiabolt_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_SR_DAL_Tiabolt_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SR_DAL_Tiabolt_C", "ReceiveEndPlay");

	Params::ABPWeap_SR_DAL_Tiabolt_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_SR_DAL_Tiabolt.BPWeap_SR_DAL_Tiabolt_C.ExecuteUbergraph_BPWeap_SR_DAL_Tiabolt
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     K2Node_CustomEvent_EventWeapon                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bCompleted                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bAmmoGiven                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_SR_DAL_Tiabolt_C::ExecuteUbergraph_BPWeap_SR_DAL_Tiabolt(int32 EntryPoint, class AWeapon* K2Node_CustomEvent_EventWeapon, bool K2Node_CustomEvent_bCompleted, bool K2Node_CustomEvent_bAmmoGiven, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 Temp_int_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SR_DAL_Tiabolt_C", "ExecuteUbergraph_BPWeap_SR_DAL_Tiabolt");

	Params::ABPWeap_SR_DAL_Tiabolt_C_ExecuteUbergraph_BPWeap_SR_DAL_Tiabolt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_EventWeapon = K2Node_CustomEvent_EventWeapon;
	Parms.K2Node_CustomEvent_bCompleted = K2Node_CustomEvent_bCompleted;
	Parms.K2Node_CustomEvent_bAmmoGiven = K2Node_CustomEvent_bAmmoGiven;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


