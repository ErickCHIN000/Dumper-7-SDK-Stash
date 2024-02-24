#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FishDataRow.FishDataRow_C
// (None)

class UClass* UFishDataRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FishDataRow_C");

	return Clss;
}


// FishDataRow_C FishDataRow.Default__FishDataRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFishDataRow_C* UFishDataRow_C::GetDefaultObj()
{
	static class UFishDataRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFishDataRow_C*>(UFishDataRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FishDataRow.FishDataRow_C.SetFish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFishDataRowHandle          NewFish                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UFishDataRow_C::SetFish(const struct FFishDataRowHandle& NewFish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FishDataRow_C", "SetFish");

	Params::UFishDataRow_C_SetFish_Params Parms{};

	Parms.NewFish = NewFish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FishDataRow.FishDataRow_C.SetAsAll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFishDataRow_C::SetAsAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FishDataRow_C", "SetAsAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FishDataRow.FishDataRow_C.ExecuteUbergraph_FishDataRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFishDataRowHandle          K2Node_CustomEvent_NewFish                                       (NoDestructor, HasGetValueTypeHash)
// struct FFishData                   CallFunc_GetFishDataStruct_FishData                              (None)
// enum class EValid                  CallFunc_GetFishDataStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate                      (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemStaticData             CallFunc_GetItemsStaticStruct_ItemsStatic                        (None)
// enum class EValid                  CallFunc_GetItemsStaticStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemableData               CallFunc_GetItemableStruct_Itemable                              (None)
// enum class EValid                  CallFunc_GetItemableStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFishDataRow_C::ExecuteUbergraph_FishDataRow(int32 EntryPoint, const struct FFishDataRowHandle& K2Node_CustomEvent_NewFish, const struct FFishData& CallFunc_GetFishDataStruct_FishData, enum class EValid CallFunc_GetFishDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FishDataRow_C", "ExecuteUbergraph_FishDataRow");

	Params::UFishDataRow_C_ExecuteUbergraph_FishDataRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewFish = K2Node_CustomEvent_NewFish;
	Parms.CallFunc_GetFishDataStruct_FishData = CallFunc_GetFishDataStruct_FishData;
	Parms.CallFunc_GetFishDataStruct_Paths = CallFunc_GetFishDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate = CallFunc_GetItemTemplateStruct_ItemTemplate;
	Parms.CallFunc_GetItemTemplateStruct_Paths = CallFunc_GetItemTemplateStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetItemsStaticStruct_ItemsStatic = CallFunc_GetItemsStaticStruct_ItemsStatic;
	Parms.CallFunc_GetItemsStaticStruct_Paths = CallFunc_GetItemsStaticStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetItemableStruct_Itemable = CallFunc_GetItemableStruct_Itemable;
	Parms.CallFunc_GetItemableStruct_Paths = CallFunc_GetItemableStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


