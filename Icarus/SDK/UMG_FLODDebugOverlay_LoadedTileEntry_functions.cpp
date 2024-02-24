#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FLODDebugOverlay_LoadedTileEntry.UMG_FLODDebugOverlay_LoadedTileEntry_C
// (None)

class UClass* UUMG_FLODDebugOverlay_LoadedTileEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FLODDebugOverlay_LoadedTileEntry_C");

	return Clss;
}


// UMG_FLODDebugOverlay_LoadedTileEntry_C UMG_FLODDebugOverlay_LoadedTileEntry.Default__UMG_FLODDebugOverlay_LoadedTileEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FLODDebugOverlay_LoadedTileEntry_C* UUMG_FLODDebugOverlay_LoadedTileEntry_C::GetDefaultObj()
{
	static class UUMG_FLODDebugOverlay_LoadedTileEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FLODDebugOverlay_LoadedTileEntry_C*>(UUMG_FLODDebugOverlay_LoadedTileEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FLODDebugOverlay_LoadedTileEntry.UMG_FLODDebugOverlay_LoadedTileEntry_C.InitForTile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFLODTile*                   Tile                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FLODDebugOverlay_LoadedTileEntry_C::InitForTile(class AFLODTile* Tile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FLODDebugOverlay_LoadedTileEntry_C", "InitForTile");

	Params::UUMG_FLODDebugOverlay_LoadedTileEntry_C_InitForTile_Params Parms{};

	Parms.Tile = Tile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FLODDebugOverlay_LoadedTileEntry.UMG_FLODDebugOverlay_LoadedTileEntry_C.ExecuteUbergraph_UMG_FLODDebugOverlay_LoadedTileEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFLODTile*                   K2Node_CustomEvent_Tile                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFLODRecord*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Set_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInstanceCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_3                            (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FLODDebugOverlay_LoadedTileEntry_C::ExecuteUbergraph_UMG_FLODDebugOverlay_LoadedTileEntry(int32 EntryPoint, class FText CallFunc_Conv_IntToText_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFLODTile* K2Node_CustomEvent_Tile, TArray<int32>& CallFunc_Map_Keys_Keys, class FText CallFunc_Conv_NameToText_ReturnValue, int32 CallFunc_Array_Get_Item, class UFLODRecord* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Set_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_GetInstanceCount_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FLODDebugOverlay_LoadedTileEntry_C", "ExecuteUbergraph_UMG_FLODDebugOverlay_LoadedTileEntry");

	Params::UUMG_FLODDebugOverlay_LoadedTileEntry_C_ExecuteUbergraph_UMG_FLODDebugOverlay_LoadedTileEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_Tile = K2Node_CustomEvent_Tile;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Set_Length_ReturnValue = CallFunc_Set_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetInstanceCount_ReturnValue = CallFunc_GetInstanceCount_ReturnValue;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_3 = CallFunc_Conv_IntToText_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


