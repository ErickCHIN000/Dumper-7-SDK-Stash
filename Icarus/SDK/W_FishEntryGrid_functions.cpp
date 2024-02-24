#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_FishEntryGrid.W_FishEntryGrid_C
// (None)

class UClass* UW_FishEntryGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_FishEntryGrid_C");

	return Clss;
}


// W_FishEntryGrid_C W_FishEntryGrid.Default__W_FishEntryGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_FishEntryGrid_C* UW_FishEntryGrid_C::GetDefaultObj()
{
	static class UW_FishEntryGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_FishEntryGrid_C*>(UW_FishEntryGrid_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_FishEntryGrid.W_FishEntryGrid_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_FishEntryGrid_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FishEntryGrid_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FishEntryGrid.W_FishEntryGrid_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_FishEntryGrid_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FishEntryGrid_C", "PreConstruct");

	Params::UW_FishEntryGrid_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FishEntryGrid.W_FishEntryGrid_C.ExecuteUbergraph_W_FishEntryGrid
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFishDataRowHandle          CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FFishData                   CallFunc_GetFishDataStruct_FishData                              (None)
// enum class EValid                  CallFunc_GetFishDataStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBestiaryManagerComponent*   CallFunc_GetLocalBestiaryManagerComponent_ReturnValue            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFishTypeTracking           CallFunc_GetFishDetails_ReturnValue                              (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UW_FishEntryGrid_C::ExecuteUbergraph_W_FishEntryGrid(int32 EntryPoint, const struct FFishDataRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FFishData& CallFunc_GetFishDataStruct_FishData, enum class EValid CallFunc_GetFishDataStruct_Paths, float CallFunc_Multiply_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_FFloor_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool K2Node_Event_IsDesignTime, class UBestiaryManagerComponent* CallFunc_GetLocalBestiaryManagerComponent_ReturnValue, const struct FFishTypeTracking& CallFunc_GetFishDetails_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FishEntryGrid_C", "ExecuteUbergraph_W_FishEntryGrid");

	Params::UW_FishEntryGrid_C_ExecuteUbergraph_W_FishEntryGrid_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetFishDataStruct_FishData = CallFunc_GetFishDataStruct_FishData;
	Parms.CallFunc_GetFishDataStruct_Paths = CallFunc_GetFishDataStruct_Paths;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetLocalBestiaryManagerComponent_ReturnValue = CallFunc_GetLocalBestiaryManagerComponent_ReturnValue;
	Parms.CallFunc_GetFishDetails_ReturnValue = CallFunc_GetFishDetails_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


