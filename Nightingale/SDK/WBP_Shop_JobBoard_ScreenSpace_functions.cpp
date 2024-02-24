#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C
// (None)

class UClass* UWBP_Shop_JobBoard_ScreenSpace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Shop_JobBoard_ScreenSpace_C");

	return Clss;
}


// WBP_Shop_JobBoard_ScreenSpace_C WBP_Shop_JobBoard_ScreenSpace.Default__WBP_Shop_JobBoard_ScreenSpace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Shop_JobBoard_ScreenSpace_C* UWBP_Shop_JobBoard_ScreenSpace_C::GetDefaultObj()
{
	static class UWBP_Shop_JobBoard_ScreenSpace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Shop_JobBoard_ScreenSpace_C*>(UWBP_Shop_JobBoard_ScreenSpace_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.ShopOfferHovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FShopOfferPresentation      ShopOffer                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_IsValidOfferId_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::ShopOfferHovered(bool Hovered, const struct FShopOfferPresentation& ShopOffer, bool CallFunc_IsValidOfferId_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "ShopOfferHovered");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_ShopOfferHovered_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.ShopOffer = ShopOffer;
	Parms.CallFunc_IsValidOfferId_ReturnValue = CallFunc_IsValidOfferId_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.ShopOfferSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Grid_Index                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FShopOfferPresentation      ShopOffer                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::ShopOfferSelected(int32 Grid_Index, const struct FShopOfferPresentation& ShopOffer, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "ShopOfferSelected");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_ShopOfferSelected_Params Parms{};

	Parms.Grid_Index = Grid_Index;
	Parms.ShopOffer = ShopOffer;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.PopulateShopOffers
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShopOfferPresentation      LShopOffer                                                       (Edit, BlueprintVisible)
// int32                              GridWidth                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_JobBoard_QuestGrid_Entry_C*JobBoardQuestEntry                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              QuestIndex                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_JobBoard_QuestGrid_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FShopOfferPresentation      CallFunc_MakePresentationData_ReturnValue                        (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_GetAvailableOffers_OutAvailableOffers                   (ReferenceParm)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::PopulateShopOffers(const struct FShopOfferPresentation& LShopOffer, int32 GridWidth, class UWBP_JobBoard_QuestGrid_Entry_C* JobBoardQuestEntry, int32 QuestIndex, class UWBP_JobBoard_QuestGrid_Entry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FGuid& CallFunc_Array_Get_Item, const struct FShopOfferPresentation& CallFunc_MakePresentationData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FGuid>& CallFunc_GetAvailableOffers_OutAvailableOffers, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "PopulateShopOffers");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_PopulateShopOffers_Params Parms{};

	Parms.LShopOffer = LShopOffer;
	Parms.GridWidth = GridWidth;
	Parms.JobBoardQuestEntry = JobBoardQuestEntry;
	Parms.QuestIndex = QuestIndex;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MakePresentationData_ReturnValue = CallFunc_MakePresentationData_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetAvailableOffers_OutAvailableOffers = CallFunc_GetAvailableOffers_OutAvailableOffers;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.SetFaction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_3                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_4                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::SetFaction(bool Temp_bool_Variable, enum class EFaction Temp_byte_Variable, enum class EFaction Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EFaction Temp_byte_Variable_2, bool Temp_bool_Variable_2, enum class EFaction Temp_byte_Variable_3, bool Temp_bool_Variable_3, enum class EFaction Temp_byte_Variable_4, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, bool Temp_bool_Variable_4, enum class EFaction Temp_byte_Variable_5, const struct FGameplayTag& Temp_struct_Variable_4, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, enum class EFaction K2Node_Select_Default, enum class EFaction K2Node_Select_Default_1, bool CallFunc_ActorHasTag_ReturnValue_2, bool CallFunc_ActorHasTag_ReturnValue_3, enum class EFaction K2Node_Select_Default_2, enum class EFaction K2Node_Select_Default_3, bool CallFunc_ActorHasTag_ReturnValue_4, enum class EFaction K2Node_Select_Default_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "SetFaction");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_SetFaction_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_ActorHasTag_ReturnValue_2 = CallFunc_ActorHasTag_ReturnValue_2;
	Parms.CallFunc_ActorHasTag_ReturnValue_3 = CallFunc_ActorHasTag_ReturnValue_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_ActorHasTag_ReturnValue_4 = CallFunc_ActorHasTag_ReturnValue_4;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.WIP_RefreshFactionEmptyListType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::WIP_RefreshFactionEmptyListType(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EFaction Temp_byte_Variable_2, uint8 CallFunc_GetValidValue_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "WIP_RefreshFactionEmptyListType");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_WIP_RefreshFactionEmptyListType_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.RemoveBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "RemoveBindings");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_RemoveBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.SetupBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "SetupBindings");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_SetupBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.HandleIfListIsEmpty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_BasicText_OneLine_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::HandleIfListIsEmpty(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, int32 K2Node_Select_Default, class FText Temp_text_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "HandleIfListIsEmpty");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_HandleIfListIsEmpty_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.RefreshBoardStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsQuestGiverFactionExchange_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::RefreshBoardStyle(bool CallFunc_IsQuestGiverFactionExchange_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "RefreshBoardStyle");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_RefreshBoardStyle_Params Parms{};

	Parms.CallFunc_IsQuestGiverFactionExchange_ReturnValue = CallFunc_IsQuestGiverFactionExchange_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.GetDefaultFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusWidget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Shop_JobBoard_ScreenSpace_C::GetDefaultFocusWidget(class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "GetDefaultFocusWidget");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_GetDefaultFocusWidget_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;
	Parms.CallFunc_GetDefaultFocusWidget_ReturnValue = CallFunc_GetDefaultFocusWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.FocusDefaultWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue_1                                 (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_2                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_Shop_JobBoard_ScreenSpace_C::FocusDefaultWidget(const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_2, bool CallFunc_HasAnyChildren_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "FocusDefaultWidget");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_FocusDefaultWidget_Params Parms{};

	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue_1 = CallFunc_Unhandled_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue_2 = CallFunc_GetChildAt_ReturnValue_2;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;
	Parms.CallFunc_HasAnyChildren_ReturnValue_2 = CallFunc_HasAnyChildren_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.SetGridPanelQuestEntriesToUnselected
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                GridPanelWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              IndexToIgnore                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CurrentChildWidget                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_JobBoard_QuestGrid_Entry_C*K2Node_DynamicCast_AsWBP_Job_Board_Quest_Grid_Entry              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::SetGridPanelQuestEntriesToUnselected(class UPanelWidget* GridPanelWidget, int32 IndexToIgnore, class UWidget* CurrentChildWidget, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_JobBoard_QuestGrid_Entry_C* K2Node_DynamicCast_AsWBP_Job_Board_Quest_Grid_Entry, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "SetGridPanelQuestEntriesToUnselected");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_SetGridPanelQuestEntriesToUnselected_Params Parms{};

	Parms.GridPanelWidget = GridPanelWidget;
	Parms.IndexToIgnore = IndexToIgnore;
	Parms.CurrentChildWidget = CurrentChildWidget;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Job_Board_Quest_Grid_Entry = K2Node_DynamicCast_AsWBP_Job_Board_Quest_Grid_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.ResetQuestBoard
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXWindowWidget*            Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::ResetQuestBoard(class UNWXWindowWidget* Window)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "ResetQuestBoard");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_ResetQuestBoard_Params Parms{};

	Parms.Window = Window;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.Cleanup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Shop_JobBoard_ScreenSpace_C::Cleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "Cleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.SetupShop
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IShopInteractionModel>ShopInteractionModel                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::SetupShop(TScriptInterface<class IShopInteractionModel>& ShopInteractionModel, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "SetupShop");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_SetupShop_Params Parms{};

	Parms.ShopInteractionModel = ShopInteractionModel;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.RefreshList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply                 CallFunc_FocusDefaultWidget_ReturnValue                          (None)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShopProviderComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::RefreshList(const struct FEventReply& CallFunc_FocusDefaultWidget_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UShopProviderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "RefreshList");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_RefreshList_Params Parms{};

	Parms.CallFunc_FocusDefaultWidget_ReturnValue = CallFunc_FocusDefaultWidget_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.CallCreatureKilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Creature_Information                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CreatureTagContainer                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       KillerTagContainer                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Shop_JobBoard_ScreenSpace_C::CallCreatureKilled(const struct FDataTableRowHandle& Creature_Information, const struct FGameplayTagContainer& CreatureTagContainer, const struct FGameplayTagContainer& KillerTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "CallCreatureKilled");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_CallCreatureKilled_Params Parms{};

	Parms.Creature_Information = Creature_Information;
	Parms.CreatureTagContainer = CreatureTagContainer;
	Parms.KillerTagContainer = KillerTagContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.CallGiveTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Gameplay_Tag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::CallGiveTag(const struct FGameplayTag& Gameplay_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "CallGiveTag");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_CallGiveTag_Params Parms{};

	Parms.Gameplay_Tag = Gameplay_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.CallStructureBlueprintPlaced
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         StructureDataHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::CallStructureBlueprintPlaced(const struct FDataTableRowHandle& StructureDataHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "CallStructureBlueprintPlaced");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_CallStructureBlueprintPlaced_Params Parms{};

	Parms.StructureDataHandle = StructureDataHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.CallResourceHarvested
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::CallResourceHarvested(const struct FInventoryEntry& ItemEntry, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "CallResourceHarvested");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_CallResourceHarvested_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.CallStructureCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Owning_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Piece_ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::CallStructureCompleted(class AActor* Owning_Actor, int32 Piece_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "CallStructureCompleted");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_CallStructureCompleted_Params Parms{};

	Parms.Owning_Actor = Owning_Actor;
	Parms.Piece_ID = Piece_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.CallItemDeposited_InWorldContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemRowHandle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ContainerTag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::CallItemDeposited_InWorldContainer(const struct FItemDataReference& ItemRowHandle, int32 Quantity, const struct FGameplayTag& ContainerTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "CallItemDeposited_InWorldContainer");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_CallItemDeposited_InWorldContainer_Params Parms{};

	Parms.ItemRowHandle = ItemRowHandle;
	Parms.Quantity = Quantity;
	Parms.ContainerTag = ContainerTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.CallWeakpointHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       WeakpointType                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       CreatureTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UWBP_Shop_JobBoard_ScreenSpace_C::CallWeakpointHit(const struct FGameplayTagContainer& WeakpointType, const struct FGameplayTagContainer& CreatureTags, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "CallWeakpointHit");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_CallWeakpointHit_Params Parms{};

	Parms.WeakpointType = WeakpointType;
	Parms.CreatureTags = CreatureTags;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.CallOnSpellCast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTechniqueDataAsset>SpellCast                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::CallOnSpellCast(TSoftObjectPtr<class UTechniqueDataAsset> SpellCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "CallOnSpellCast");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_CallOnSpellCast_Params Parms{};

	Parms.SpellCast = SpellCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.CallOnGlyphRevealed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Shop_JobBoard_ScreenSpace_C::CallOnGlyphRevealed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "CallOnGlyphRevealed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.CallFishCaught
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFish                       CaughtFish                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UWBP_Shop_JobBoard_ScreenSpace_C::CallFishCaught(struct FFish& CaughtFish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "CallFishCaught");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_CallFishCaught_Params Parms{};

	Parms.CaughtFish = CaughtFish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.CallOnInteractedWithPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::CallOnInteractedWithPlayer(class APawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "CallOnInteractedWithPlayer");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_CallOnInteractedWithPlayer_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Shop_JobBoard_ScreenSpace_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Shop_JobBoard_ScreenSpace_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.BndEvt__DetailPane_Contracts_K2Node_ComponentBoundEvent_0_QuestAccepted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        Accepted                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    Contract_State                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::BndEvt__DetailPane_Contracts_K2Node_ComponentBoundEvent_0_QuestAccepted__DelegateSignature(const struct FOngoingTaskProgress& Accepted, enum class E_Contract_StateType Contract_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "BndEvt__DetailPane_Contracts_K2Node_ComponentBoundEvent_0_QuestAccepted__DelegateSignature");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_BndEvt__DetailPane_Contracts_K2Node_ComponentBoundEvent_0_QuestAccepted__DelegateSignature_Params Parms{};

	Parms.Accepted = Accepted;
	Parms.Contract_State = Contract_State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C.ExecuteUbergraph_WBP_Shop_JobBoard_ScreenSpace
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Event_Creature_Information                                (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_CreatureTagContainer                                (None)
// struct FGameplayTagContainer       K2Node_Event_KillerTagContainer                                  (None)
// struct FGameplayTag                K2Node_Event_Gameplay_Tag                                        (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Event_StructureDataHandle                                 (NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_Event_ItemEntry                                           (None)
// int32                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Owning_Actor                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Piece_ID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          K2Node_Event_ItemRowHandle                                       (HasGetValueTypeHash)
// int32                              K2Node_Event_Quantity                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_ContainerTag                                        (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_WeakpointType                                       (None)
// struct FGameplayTagContainer       K2Node_Event_CreatureTags                                        (None)
// struct FHitResult                  K2Node_Event_HitResult                                           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TSoftObjectPtr<class UTechniqueDataAsset>K2Node_Event_SpellCast                                           (HasGetValueTypeHash)
// struct FFish                       K2Node_Event_CaughtFish                                          (ConstParm, ContainsInstancedReference)
// class APawn*                       K2Node_Event_InteractingPawn                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        K2Node_ComponentBoundEvent_Accepted                              (None)
// enum class E_Contract_StateType    K2Node_ComponentBoundEvent_Contract_State                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UShopPurchaserComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_JobBoard_ScreenSpace_C::ExecuteUbergraph_WBP_Shop_JobBoard_ScreenSpace(int32 EntryPoint, const struct FDataTableRowHandle& K2Node_Event_Creature_Information, const struct FGameplayTagContainer& K2Node_Event_CreatureTagContainer, const struct FGameplayTagContainer& K2Node_Event_KillerTagContainer, const struct FGameplayTag& K2Node_Event_Gameplay_Tag, const struct FDataTableRowHandle& K2Node_Event_StructureDataHandle, const struct FInventoryEntry& K2Node_Event_ItemEntry, int32 K2Node_Event_Amount, class AActor* K2Node_Event_Owning_Actor, int32 K2Node_Event_Piece_ID, const struct FItemDataReference& K2Node_Event_ItemRowHandle, int32 K2Node_Event_Quantity, const struct FGameplayTag& K2Node_Event_ContainerTag, const struct FGameplayTagContainer& K2Node_Event_WeakpointType, const struct FGameplayTagContainer& K2Node_Event_CreatureTags, const struct FHitResult& K2Node_Event_HitResult, TSoftObjectPtr<class UTechniqueDataAsset> K2Node_Event_SpellCast, const struct FFish& K2Node_Event_CaughtFish, class APawn* K2Node_Event_InteractingPawn, const struct FOngoingTaskProgress& K2Node_ComponentBoundEvent_Accepted, enum class E_Contract_StateType K2Node_ComponentBoundEvent_Contract_State, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UShopPurchaserComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_JobBoard_ScreenSpace_C", "ExecuteUbergraph_WBP_Shop_JobBoard_ScreenSpace");

	Params::UWBP_Shop_JobBoard_ScreenSpace_C_ExecuteUbergraph_WBP_Shop_JobBoard_ScreenSpace_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Creature_Information = K2Node_Event_Creature_Information;
	Parms.K2Node_Event_CreatureTagContainer = K2Node_Event_CreatureTagContainer;
	Parms.K2Node_Event_KillerTagContainer = K2Node_Event_KillerTagContainer;
	Parms.K2Node_Event_Gameplay_Tag = K2Node_Event_Gameplay_Tag;
	Parms.K2Node_Event_StructureDataHandle = K2Node_Event_StructureDataHandle;
	Parms.K2Node_Event_ItemEntry = K2Node_Event_ItemEntry;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.K2Node_Event_Owning_Actor = K2Node_Event_Owning_Actor;
	Parms.K2Node_Event_Piece_ID = K2Node_Event_Piece_ID;
	Parms.K2Node_Event_ItemRowHandle = K2Node_Event_ItemRowHandle;
	Parms.K2Node_Event_Quantity = K2Node_Event_Quantity;
	Parms.K2Node_Event_ContainerTag = K2Node_Event_ContainerTag;
	Parms.K2Node_Event_WeakpointType = K2Node_Event_WeakpointType;
	Parms.K2Node_Event_CreatureTags = K2Node_Event_CreatureTags;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_Event_SpellCast = K2Node_Event_SpellCast;
	Parms.K2Node_Event_CaughtFish = K2Node_Event_CaughtFish;
	Parms.K2Node_Event_InteractingPawn = K2Node_Event_InteractingPawn;
	Parms.K2Node_ComponentBoundEvent_Accepted = K2Node_ComponentBoundEvent_Accepted;
	Parms.K2Node_ComponentBoundEvent_Contract_State = K2Node_ComponentBoundEvent_Contract_State;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


