#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ClaimLaunch_LobbyPrivacy.UMG_ClaimLaunch_LobbyPrivacy_C
// (None)

class UClass* UUMG_ClaimLaunch_LobbyPrivacy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ClaimLaunch_LobbyPrivacy_C");

	return Clss;
}


// UMG_ClaimLaunch_LobbyPrivacy_C UMG_ClaimLaunch_LobbyPrivacy.Default__UMG_ClaimLaunch_LobbyPrivacy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ClaimLaunch_LobbyPrivacy_C* UUMG_ClaimLaunch_LobbyPrivacy_C::GetDefaultObj()
{
	static class UUMG_ClaimLaunch_LobbyPrivacy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ClaimLaunch_LobbyPrivacy_C*>(UUMG_ClaimLaunch_LobbyPrivacy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ClaimLaunch_LobbyPrivacy.UMG_ClaimLaunch_LobbyPrivacy_C.GetLobbyPrivacy
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ELobbyPrivacy           LobbyPrivacy                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSelectedOption_SelectedRow                           (None)
// TArray<enum class ELobbyPrivacy>   CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELobbyPrivacy           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ClaimLaunch_LobbyPrivacy_C::GetLobbyPrivacy(enum class ELobbyPrivacy* LobbyPrivacy, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetSelectedOption_SelectedRow, TArray<enum class ELobbyPrivacy>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class ELobbyPrivacy CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ClaimLaunch_LobbyPrivacy_C", "GetLobbyPrivacy");

	Params::UUMG_ClaimLaunch_LobbyPrivacy_C_GetLobbyPrivacy_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSelectedOption_SelectedRow = CallFunc_GetSelectedOption_SelectedRow;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LobbyPrivacy != nullptr)
		*LobbyPrivacy = Parms.LobbyPrivacy;

}


// Function UMG_ClaimLaunch_LobbyPrivacy.UMG_ClaimLaunch_LobbyPrivacy_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ClaimLaunch_LobbyPrivacy_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ClaimLaunch_LobbyPrivacy_C", "PreConstruct");

	Params::UUMG_ClaimLaunch_LobbyPrivacy_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ClaimLaunch_LobbyPrivacy.UMG_ClaimLaunch_LobbyPrivacy_C.ExecuteUbergraph_UMG_ClaimLaunch_LobbyPrivacy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class ELobbyPrivacy>   CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELobbyPrivacy           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddOption_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ClaimLaunch_LobbyPrivacy_C::ExecuteUbergraph_UMG_ClaimLaunch_LobbyPrivacy(int32 EntryPoint, TArray<enum class ELobbyPrivacy>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, enum class ELobbyPrivacy CallFunc_Array_Get_Item, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_AddOption_Index, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ClaimLaunch_LobbyPrivacy_C", "ExecuteUbergraph_UMG_ClaimLaunch_LobbyPrivacy");

	Params::UUMG_ClaimLaunch_LobbyPrivacy_C_ExecuteUbergraph_UMG_ClaimLaunch_LobbyPrivacy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_AddOption_Index = CallFunc_AddOption_Index;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


