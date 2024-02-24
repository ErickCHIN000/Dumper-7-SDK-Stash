#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_PDA_Map_QuestInfo.wid_PDA_Map_QuestInfo_C
// (None)

class UClass* UWid_PDA_Map_QuestInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_PDA_Map_QuestInfo_C");

	return Clss;
}


// wid_PDA_Map_QuestInfo_C wid_PDA_Map_QuestInfo.Default__wid_PDA_Map_QuestInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_PDA_Map_QuestInfo_C* UWid_PDA_Map_QuestInfo_C::GetDefaultObj()
{
	static class UWid_PDA_Map_QuestInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_PDA_Map_QuestInfo_C*>(UWid_PDA_Map_QuestInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_PDA_Map_QuestInfo.wid_PDA_Map_QuestInfo_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDescriptionInfo            QuestInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_FormatText_Output                                       (None)

void UWid_PDA_Map_QuestInfo_C::UpdateText(const struct FDescriptionInfo& QuestInfo, class FText CallFunc_FormatText_Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PDA_Map_QuestInfo_C", "UpdateText");

	Params::UWid_PDA_Map_QuestInfo_C_UpdateText_Params Parms{};

	Parms.QuestInfo = QuestInfo;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_PDA_Map_QuestInfo.wid_PDA_Map_QuestInfo_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EEventMap>       DisableOnMaps                                                    (Edit, BlueprintVisible)
// enum class EEventMap               CurrentMap                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveQuestInfo            ActiveQuest                                                      (Edit, BlueprintVisible, NoDestructor)
// TArray<enum class EEventMap>       K2Node_MakeArray_Array                                           (ReferenceParm)
// class UCustomGameInstance*         CallFunc_GetCGGameInstanceBase_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomGameInstance*         CallFunc_GetCGGameInstanceBase_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestInfoInput             CallFunc_GetQuestInfoBP_ReturnValue                              (None)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDescriptionInfo            CallFunc_GetQuestDescription_ReturnValue                         (None)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMainPawnCpp*                CallFunc_GetCGPawnBase_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentPersistantLevel_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               CallFunc_GetMapEnumByName_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EEventMap, struct FActiveQuestInfo>CallFunc_GetActiveQuests_ReturnValue                             (None)
// struct FActiveQuestInfo            CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_PDA_Map_QuestInfo_C::Update(const TArray<enum class EEventMap>& DisableOnMaps, enum class EEventMap CurrentMap, const struct FActiveQuestInfo& ActiveQuest, TArray<enum class EEventMap>& K2Node_MakeArray_Array, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue_1, const struct FQuestInfoInput& CallFunc_GetQuestInfoBP_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FDescriptionInfo& CallFunc_GetQuestDescription_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AMainPawnCpp* CallFunc_GetCGPawnBase_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EEventMap CallFunc_GetMapEnumByName_ReturnValue, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, const struct FActiveQuestInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PDA_Map_QuestInfo_C", "Update");

	Params::UWid_PDA_Map_QuestInfo_C_Update_Params Parms{};

	Parms.DisableOnMaps = DisableOnMaps;
	Parms.CurrentMap = CurrentMap;
	Parms.ActiveQuest = ActiveQuest;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCGGameInstanceBase_ReturnValue = CallFunc_GetCGGameInstanceBase_ReturnValue;
	Parms.CallFunc_GetCGGameInstanceBase_ReturnValue_1 = CallFunc_GetCGGameInstanceBase_ReturnValue_1;
	Parms.CallFunc_GetQuestInfoBP_ReturnValue = CallFunc_GetQuestInfoBP_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetQuestDescription_ReturnValue = CallFunc_GetQuestDescription_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetCGPawnBase_ReturnValue = CallFunc_GetCGPawnBase_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetCurrentPersistantLevel_ReturnValue = CallFunc_GetCurrentPersistantLevel_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetMapEnumByName_ReturnValue = CallFunc_GetMapEnumByName_ReturnValue;
	Parms.CallFunc_GetActiveQuests_ReturnValue = CallFunc_GetActiveQuests_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_PDA_Map_QuestInfo.wid_PDA_Map_QuestInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_PDA_Map_QuestInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PDA_Map_QuestInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_PDA_Map_QuestInfo.wid_PDA_Map_QuestInfo_C.ExecuteUbergraph_wid_PDA_Map_QuestInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_PDA_Map_QuestInfo_C::ExecuteUbergraph_wid_PDA_Map_QuestInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PDA_Map_QuestInfo_C", "ExecuteUbergraph_wid_PDA_Map_QuestInfo");

	Params::UWid_PDA_Map_QuestInfo_C_ExecuteUbergraph_wid_PDA_Map_QuestInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


