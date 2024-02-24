#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_GM_PropertyLinkDump.bp_GM_PropertyLinkDump_C
// (Actor)

class UClass* Abp_GM_PropertyLinkDump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_GM_PropertyLinkDump_C");

	return Clss;
}


// bp_GM_PropertyLinkDump_C bp_GM_PropertyLinkDump.Default__bp_GM_PropertyLinkDump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_GM_PropertyLinkDump_C* Abp_GM_PropertyLinkDump_C::GetDefaultObj()
{
	static class Abp_GM_PropertyLinkDump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_GM_PropertyLinkDump_C*>(Abp_GM_PropertyLinkDump_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_GM_PropertyLinkDump.bp_GM_PropertyLinkDump_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Abp_GM_PropertyLinkDump_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_GM_PropertyLinkDump_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_GM_PropertyLinkDump.bp_GM_PropertyLinkDump_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_GM_PropertyLinkDump_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_GM_PropertyLinkDump_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_GM_PropertyLinkDump.bp_GM_PropertyLinkDump_C.ExecuteUbergraph_bp_GM_PropertyLinkDump
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetSublevelsForCurrentPersistant_ReturnValue            (ReferenceParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class ULevelStreaming*             CallFunc_GetStreamingLevel_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLevelVisible_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLevelLoaded_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentPersistantLevel_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_GM_PropertyLinkDump_C::ExecuteUbergraph_bp_GM_PropertyLinkDump(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, TArray<class FName>& CallFunc_GetSublevelsForCurrentPersistant_ReturnValue, int32 Temp_int_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsLevelVisible_ReturnValue, bool CallFunc_IsLevelLoaded_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class FName CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_GM_PropertyLinkDump_C", "ExecuteUbergraph_bp_GM_PropertyLinkDump");

	Params::Abp_GM_PropertyLinkDump_C_ExecuteUbergraph_bp_GM_PropertyLinkDump_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetSublevelsForCurrentPersistant_ReturnValue = CallFunc_GetSublevelsForCurrentPersistant_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetStreamingLevel_ReturnValue = CallFunc_GetStreamingLevel_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsLevelVisible_ReturnValue = CallFunc_IsLevelVisible_ReturnValue;
	Parms.CallFunc_IsLevelLoaded_ReturnValue = CallFunc_IsLevelLoaded_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCurrentPersistantLevel_ReturnValue = CallFunc_GetCurrentPersistantLevel_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


