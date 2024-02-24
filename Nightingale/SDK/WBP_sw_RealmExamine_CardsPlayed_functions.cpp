#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_RealmExamine_CardsPlayed.WBP_sw_RealmExamine_CardsPlayed_C
// (None)

class UClass* UWBP_sw_RealmExamine_CardsPlayed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_RealmExamine_CardsPlayed_C");

	return Clss;
}


// WBP_sw_RealmExamine_CardsPlayed_C WBP_sw_RealmExamine_CardsPlayed.Default__WBP_sw_RealmExamine_CardsPlayed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_RealmExamine_CardsPlayed_C* UWBP_sw_RealmExamine_CardsPlayed_C::GetDefaultObj()
{
	static class UWBP_sw_RealmExamine_CardsPlayed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_RealmExamine_CardsPlayed_C*>(UWBP_sw_RealmExamine_CardsPlayed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_RealmExamine_CardsPlayed.WBP_sw_RealmExamine_CardsPlayed_C.SetupCardsUsed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_sw_Readiness_RealmCard_C*>LCardsOnScreen                                                   (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              L_CurrentIndex                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_Readiness_RealmCard_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           CallFunc_GetNWXGameStateBase_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemData>           CallFunc_GenerateRealmCardsData_ReturnValue                      (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDefaultItemName_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmExamine_CardsPlayed_C::SetupCardsUsed(const TArray<class UWBP_sw_Readiness_RealmCard_C*>& LCardsOnScreen, int32 L_CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_sw_Readiness_RealmCard_C* CallFunc_Array_Get_Item, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, TArray<struct FItemData>& CallFunc_GenerateRealmCardsData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FItemData& CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_GetDefaultItemName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmExamine_CardsPlayed_C", "SetupCardsUsed");

	Params::UWBP_sw_RealmExamine_CardsPlayed_C_SetupCardsUsed_Params Parms{};

	Parms.LCardsOnScreen = LCardsOnScreen;
	Parms.L_CurrentIndex = L_CurrentIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetNWXGameStateBase_ReturnValue = CallFunc_GetNWXGameStateBase_ReturnValue;
	Parms.CallFunc_GenerateRealmCardsData_ReturnValue = CallFunc_GenerateRealmCardsData_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetDefaultItemName_ReturnValue = CallFunc_GetDefaultItemName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmExamine_CardsPlayed.WBP_sw_RealmExamine_CardsPlayed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_RealmExamine_CardsPlayed_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmExamine_CardsPlayed_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_RealmExamine_CardsPlayed.WBP_sw_RealmExamine_CardsPlayed_C.ExecuteUbergraph_WBP_sw_RealmExamine_CardsPlayed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_sw_Readiness_RealmCard_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_sw_RealmExamine_CardsPlayed_C::ExecuteUbergraph_WBP_sw_RealmExamine_CardsPlayed(int32 EntryPoint, TArray<class UWBP_sw_Readiness_RealmCard_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmExamine_CardsPlayed_C", "ExecuteUbergraph_WBP_sw_RealmExamine_CardsPlayed");

	Params::UWBP_sw_RealmExamine_CardsPlayed_C_ExecuteUbergraph_WBP_sw_RealmExamine_CardsPlayed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


