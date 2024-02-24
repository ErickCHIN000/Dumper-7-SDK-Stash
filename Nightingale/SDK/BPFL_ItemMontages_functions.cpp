#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_ItemMontages.BPFL_ItemMontages_C
// (None)

class UClass* UBPFL_ItemMontages_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_ItemMontages_C");

	return Clss;
}


// BPFL_ItemMontages_C BPFL_ItemMontages.Default__BPFL_ItemMontages_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_ItemMontages_C* UBPFL_ItemMontages_C::GetDefaultObj()
{
	static class UBPFL_ItemMontages_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_ItemMontages_C*>(UBPFL_ItemMontages_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_ItemMontages.BPFL_ItemMontages_C.ProxyPickupMontageTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_ItemMontages_C::ProxyPickupMontageTag(class UObject* __WorldContext, struct FGameplayTag* Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ItemMontages_C", "ProxyPickupMontageTag");

	Params::UBPFL_ItemMontages_C_ProxyPickupMontageTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Tag != nullptr)
		*Tag = std::move(Parms.Tag);

}


// Function BPFL_ItemMontages.BPFL_ItemMontages_C.RandomMontage
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UAnimMontage*>        MontageArray                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                RandomMontage                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_ItemMontages_C::RandomMontage(TArray<class UAnimMontage*>& MontageArray, class UObject* __WorldContext, class UAnimMontage** RandomMontage, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class UAnimMontage* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ItemMontages_C", "RandomMontage");

	Params::UBPFL_ItemMontages_C_RandomMontage_Params Parms{};

	Parms.MontageArray = MontageArray;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (RandomMontage != nullptr)
		*RandomMontage = Parms.RandomMontage;

}


// Function BPFL_ItemMontages.BPFL_ItemMontages_C.GetRandomMontagesFromSet
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAbilityMontages            MontageSet                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                RandomFirstPersonItem                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                RandomFirstPersonCharacter                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                RandomThirdPersonItem                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                RandomThirdPersonCharacter                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                ThirdPersonCharacter                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                ThirdPersonItem                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                FirstPersonCharacter                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                FirstPersonItem                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_RandomMontage_RandomMontage                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_RandomMontage_RandomMontage_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_RandomMontage_RandomMontage_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_RandomMontage_RandomMontage_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_ItemMontages_C::GetRandomMontagesFromSet(const struct FAbilityMontages& MontageSet, class UObject* __WorldContext, class UAnimMontage** RandomFirstPersonItem, class UAnimMontage** RandomFirstPersonCharacter, class UAnimMontage** RandomThirdPersonItem, class UAnimMontage** RandomThirdPersonCharacter, class UAnimMontage* ThirdPersonCharacter, class UAnimMontage* ThirdPersonItem, class UAnimMontage* FirstPersonCharacter, class UAnimMontage* FirstPersonItem, class UAnimMontage* CallFunc_RandomMontage_RandomMontage, class UAnimMontage* CallFunc_RandomMontage_RandomMontage_1, class UAnimMontage* CallFunc_RandomMontage_RandomMontage_2, class UAnimMontage* CallFunc_RandomMontage_RandomMontage_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ItemMontages_C", "GetRandomMontagesFromSet");

	Params::UBPFL_ItemMontages_C_GetRandomMontagesFromSet_Params Parms{};

	Parms.MontageSet = MontageSet;
	Parms.__WorldContext = __WorldContext;
	Parms.ThirdPersonCharacter = ThirdPersonCharacter;
	Parms.ThirdPersonItem = ThirdPersonItem;
	Parms.FirstPersonCharacter = FirstPersonCharacter;
	Parms.FirstPersonItem = FirstPersonItem;
	Parms.CallFunc_RandomMontage_RandomMontage = CallFunc_RandomMontage_RandomMontage;
	Parms.CallFunc_RandomMontage_RandomMontage_1 = CallFunc_RandomMontage_RandomMontage_1;
	Parms.CallFunc_RandomMontage_RandomMontage_2 = CallFunc_RandomMontage_RandomMontage_2;
	Parms.CallFunc_RandomMontage_RandomMontage_3 = CallFunc_RandomMontage_RandomMontage_3;

	UObject::ProcessEvent(Func, &Parms);

	if (RandomFirstPersonItem != nullptr)
		*RandomFirstPersonItem = Parms.RandomFirstPersonItem;

	if (RandomFirstPersonCharacter != nullptr)
		*RandomFirstPersonCharacter = Parms.RandomFirstPersonCharacter;

	if (RandomThirdPersonItem != nullptr)
		*RandomThirdPersonItem = Parms.RandomThirdPersonItem;

	if (RandomThirdPersonCharacter != nullptr)
		*RandomThirdPersonCharacter = Parms.RandomThirdPersonCharacter;

}


// Function BPFL_ItemMontages.BPFL_ItemMontages_C.GetMontageSetForAction
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FGameplayTag                ActionTag                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bFoundMontageSet                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityMontages            MontageSetForAction                                              (Parm, OutParm)
// class UClass*                      LocalAnimBank                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimB_Base_FP_C*            CallFunc_GetDefaultObject_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetItemAnimationBanks_AnimBank_FP                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityMontages            CallFunc_GetAbilityMontageSet_OutMontageSets                     (None)
// bool                               CallFunc_GetAbilityMontageSet_bSucceeded                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_ItemMontages_C::GetMontageSetForAction(const struct FItemDataReference& ItemReference, struct FGameplayTag& ActionTag, class UObject* __WorldContext, bool* bFoundMontageSet, struct FAbilityMontages* MontageSetForAction, class UClass* LocalAnimBank, class UAnimB_Base_FP_C* CallFunc_GetDefaultObject_ReturnValue, class UClass* CallFunc_GetItemAnimationBanks_AnimBank_FP, bool CallFunc_IsValidClass_ReturnValue, const struct FAbilityMontages& CallFunc_GetAbilityMontageSet_OutMontageSets, bool CallFunc_GetAbilityMontageSet_bSucceeded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ItemMontages_C", "GetMontageSetForAction");

	Params::UBPFL_ItemMontages_C_GetMontageSetForAction_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.ActionTag = ActionTag;
	Parms.__WorldContext = __WorldContext;
	Parms.LocalAnimBank = LocalAnimBank;
	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.CallFunc_GetItemAnimationBanks_AnimBank_FP = CallFunc_GetItemAnimationBanks_AnimBank_FP;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetAbilityMontageSet_OutMontageSets = CallFunc_GetAbilityMontageSet_OutMontageSets;
	Parms.CallFunc_GetAbilityMontageSet_bSucceeded = CallFunc_GetAbilityMontageSet_bSucceeded;

	UObject::ProcessEvent(Func, &Parms);

	if (bFoundMontageSet != nullptr)
		*bFoundMontageSet = Parms.bFoundMontageSet;

	if (MontageSetForAction != nullptr)
		*MontageSetForAction = std::move(Parms.MontageSetForAction);

}


// Function BPFL_ItemMontages.BPFL_ItemMontages_C.GetItemMontage
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FGameplayTag                Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// enum class E_ItemMontageSkeletonTypeType                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UAnimMontage*>        Montages                                                         (Edit, BlueprintVisible)
// struct FAbilityMontages            MontageSetForAction                                              (Edit, BlueprintVisible)
// bool                               ItemData                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMontageSetForAction_bFoundMontageSet                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityMontages            CallFunc_GetMontageSetForAction_MontageSetForAction              (None)
// class UAnimMontage*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_ItemMontages_C::GetItemMontage(const struct FItemDataReference& ItemId, const struct FGameplayTag& Action, enum class E_ItemMontageSkeletonType Type, class UObject* __WorldContext, bool* Success, class UAnimMontage** Montage, const TArray<class UAnimMontage*>& Montages, const struct FAbilityMontages& MontageSetForAction, bool ItemData, bool CallFunc_GetMontageSetForAction_bFoundMontageSet, const struct FAbilityMontages& CallFunc_GetMontageSetForAction_MontageSetForAction, class UAnimMontage* CallFunc_Array_Get_Item, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ItemMontages_C", "GetItemMontage");

	Params::UBPFL_ItemMontages_C_GetItemMontage_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Action = Action;
	Parms.Type = Type;
	Parms.__WorldContext = __WorldContext;
	Parms.Montages = Montages;
	Parms.MontageSetForAction = MontageSetForAction;
	Parms.ItemData = ItemData;
	Parms.CallFunc_GetMontageSetForAction_bFoundMontageSet = CallFunc_GetMontageSetForAction_bFoundMontageSet;
	Parms.CallFunc_GetMontageSetForAction_MontageSetForAction = CallFunc_GetMontageSetForAction_MontageSetForAction;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Montage != nullptr)
		*Montage = Parms.Montage;

}

}


