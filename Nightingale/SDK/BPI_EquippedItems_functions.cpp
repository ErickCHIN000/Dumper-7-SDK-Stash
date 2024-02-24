#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_EquippedItems.BPI_EquippedItems_C
// (None)

class UClass* IBPI_EquippedItems_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_EquippedItems_C");

	return Clss;
}


// BPI_EquippedItems_C BPI_EquippedItems.Default__BPI_EquippedItems_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_EquippedItems_C* IBPI_EquippedItems_C::GetDefaultObj()
{
	static class IBPI_EquippedItems_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_EquippedItems_C*>(IBPI_EquippedItems_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_EquippedItems.BPI_EquippedItems_C.GetItemConst
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTag                ContextTag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Weapon                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_EquippedItems_C::GetItemConst(const struct FGameplayTag& ContextTag, class AEquippableItem** Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_EquippedItems_C", "GetItemConst");

	Params::IBPI_EquippedItems_C_GetItemConst_Params Parms{};

	Parms.ContextTag = ContextTag;

	UObject::ProcessEvent(Func, &Parms);

	if (Weapon != nullptr)
		*Weapon = Parms.Weapon;

}


// Function BPI_EquippedItems.BPI_EquippedItems_C.ConsumeItemProxy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ItemProxyActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_EquippedItems_C::ConsumeItemProxy(class AActor* ItemProxyActor, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_EquippedItems_C", "ConsumeItemProxy");

	Params::IBPI_EquippedItems_C_ConsumeItemProxy_Params Parms{};

	Parms.ItemProxyActor = ItemProxyActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_EquippedItems.BPI_EquippedItems_C.PickUpItemProxy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ItemProxyActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_EquippedItems_C::PickUpItemProxy(class AActor* ItemProxyActor, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_EquippedItems_C", "PickUpItemProxy");

	Params::IBPI_EquippedItems_C_PickUpItemProxy_Params Parms{};

	Parms.ItemProxyActor = ItemProxyActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_EquippedItems.BPI_EquippedItems_C.WithdrawItemFromContainerByTag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>ItemContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                GameplayTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_EquippedItems_C::WithdrawItemFromContainerByTag(TScriptInterface<class IItemContainer> ItemContainer, const struct FGameplayTag& GameplayTag, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_EquippedItems_C", "WithdrawItemFromContainerByTag");

	Params::IBPI_EquippedItems_C_WithdrawItemFromContainerByTag_Params Parms{};

	Parms.ItemContainer = ItemContainer;
	Parms.GameplayTag = GameplayTag;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_EquippedItems.BPI_EquippedItems_C.UnequipEquippedItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_EquippedItems_C::UnequipEquippedItem(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_EquippedItems_C", "UnequipEquippedItem");

	Params::IBPI_EquippedItems_C_UnequipEquippedItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_EquippedItems.BPI_EquippedItems_C.CreateAndEquipItemFromEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_EquippedItems_C::CreateAndEquipItemFromEntry(const struct FInventoryEntry& Entry, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_EquippedItems_C", "CreateAndEquipItemFromEntry");

	Params::IBPI_EquippedItems_C_CreateAndEquipItemFromEntry_Params Parms{};

	Parms.Entry = Entry;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BPI_EquippedItems.BPI_EquippedItems_C.CreateAndEquipItemFromItemID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_EquippedItems_C::CreateAndEquipItemFromItemID(const struct FItemDataReference& ItemId, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_EquippedItems_C", "CreateAndEquipItemFromItemID");

	Params::IBPI_EquippedItems_C_CreateAndEquipItemFromItemID_Params Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_EquippedItems.BPI_EquippedItems_C.TransferItemToWorldItemContainerActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ToActor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_EquippedItems_C::TransferItemToWorldItemContainerActor(class AActor* ToActor, class AEquippableItem* Item, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_EquippedItems_C", "TransferItemToWorldItemContainerActor");

	Params::IBPI_EquippedItems_C_TransferItemToWorldItemContainerActor_Params Parms{};

	Parms.ToActor = ToActor;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_EquippedItems.BPI_EquippedItems_C.TransferItemFromWorldItemContainerActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      FromActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_EquippedItems_C::TransferItemFromWorldItemContainerActor(class AActor* FromActor, class AEquippableItem* Item, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_EquippedItems_C", "TransferItemFromWorldItemContainerActor");

	Params::IBPI_EquippedItems_C_TransferItemFromWorldItemContainerActor_Params Parms{};

	Parms.FromActor = FromActor;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_EquippedItems.BPI_EquippedItems_C.GetItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ContextTag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Weapon                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_EquippedItems_C::GetItem(const struct FGameplayTag& ContextTag, class AEquippableItem** Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_EquippedItems_C", "GetItem");

	Params::IBPI_EquippedItems_C_GetItem_Params Parms{};

	Parms.ContextTag = ContextTag;

	UObject::ProcessEvent(Func, &Parms);

	if (Weapon != nullptr)
		*Weapon = Parms.Weapon;

}

}


