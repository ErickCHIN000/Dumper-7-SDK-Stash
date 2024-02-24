#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InventoryHUDInterface.InventoryHUDInterface_C
// (None)

class UClass* IInventoryHUDInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryHUDInterface_C");

	return Clss;
}


// InventoryHUDInterface_C InventoryHUDInterface.Default__InventoryHUDInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInventoryHUDInterface_C* IInventoryHUDInterface_C::GetDefaultObj()
{
	static class IInventoryHUDInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInventoryHUDInterface_C*>(IInventoryHUDInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Get_InventorySlots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UInventory_Slot_C*>   NewParam                                                         (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Get_InventorySlots(TArray<class UInventory_Slot_C*>* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Get_InventorySlots");

	Params::IInventoryHUDInterface_C_UI_Get_InventorySlots_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Autoloot_Container
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInventoryHUDInterface_C::UI_Autoloot_Container()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Autoloot_Container");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_UnEquip_To_Container
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Inventory_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Container_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_UnEquip_To_Container(int32 From_Inventory_Slot, int32 To_Container_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_UnEquip_To_Container");

	Params::IInventoryHUDInterface_C_UI_UnEquip_To_Container_Params Parms{};

	Parms.From_Inventory_Slot = From_Inventory_Slot;
	Parms.To_Container_Slot = To_Container_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Equip_From_Container
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Container_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Inventory_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Equip_From_Container(int32 From_Container_Slot, int32 To_Inventory_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Equip_From_Container");

	Params::IInventoryHUDInterface_C_UI_Equip_From_Container_Params Parms{};

	Parms.From_Container_Slot = From_Container_Slot;
	Parms.To_Inventory_Slot = To_Inventory_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Clear_Hotbar_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Hotbar_Slot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Clear_Hotbar_Item(int32 From_Hotbar_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Clear_Hotbar_Item");

	Params::IInventoryHUDInterface_C_UI_Clear_Hotbar_Item_Params Parms{};

	Parms.From_Hotbar_Slot = From_Hotbar_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Drop_Inventory_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Inventory_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Drop_Inventory_Item(int32 From_Inventory_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Drop_Inventory_Item");

	Params::IInventoryHUDInterface_C_UI_Drop_Inventory_Item_Params Parms{};

	Parms.From_Inventory_Slot = From_Inventory_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Clear_ToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Clear_ToolTip(class FName ItemName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Clear_ToolTip");

	Params::IInventoryHUDInterface_C_UI_Clear_ToolTip_Params Parms{};

	Parms.ItemName = ItemName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Get_Container_ToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Container_Slot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Get_Container_ToolTip(int32 Container_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Get_Container_ToolTip");

	Params::IInventoryHUDInterface_C_UI_Get_Container_ToolTip_Params Parms{};

	Parms.Container_Slot = Container_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Get_Inventory_ToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Inventory_Slot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Get_Inventory_ToolTip(int32 Inventory_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Get_Inventory_ToolTip");

	Params::IInventoryHUDInterface_C_UI_Get_Inventory_ToolTip_Params Parms{};

	Parms.Inventory_Slot = Inventory_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Move_Hotbar_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Slot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Slot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDraggedFromInventory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsDraggedFromHotbar                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInventoryHUDInterface_C::UI_Move_Hotbar_Item(int32 From_Slot, int32 To_Slot, bool IsDraggedFromInventory, bool IsDraggedFromHotbar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Move_Hotbar_Item");

	Params::IInventoryHUDInterface_C_UI_Move_Hotbar_Item_Params Parms{};

	Parms.From_Slot = From_Slot;
	Parms.To_Slot = To_Slot;
	Parms.IsDraggedFromInventory = IsDraggedFromInventory;
	Parms.IsDraggedFromHotbar = IsDraggedFromHotbar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Use_Container_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Container_Slot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Use_Container_Item(int32 Container_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Use_Container_Item");

	Params::IInventoryHUDInterface_C_UI_Use_Container_Item_Params Parms{};

	Parms.Container_Slot = Container_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Use_Inventory_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Inventory_Slot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Use_Inventory_Item(int32 Inventory_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Use_Inventory_Item");

	Params::IInventoryHUDInterface_C_UI_Use_Inventory_Item_Params Parms{};

	Parms.Inventory_Slot = Inventory_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Split_Item_From_Container
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Container_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Slot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Split_Item_From_Container(int32 From_Container_Slot, int32 To_Slot, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Split_Item_From_Container");

	Params::IInventoryHUDInterface_C_UI_Split_Item_From_Container_Params Parms{};

	Parms.From_Container_Slot = From_Container_Slot;
	Parms.To_Slot = To_Slot;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Split_Item_From_Inventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Inventory_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Slot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Split_Item_From_Inventory(int32 From_Inventory_Slot, int32 To_Slot, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Split_Item_From_Inventory");

	Params::IInventoryHUDInterface_C_UI_Split_Item_From_Inventory_Params Parms{};

	Parms.From_Inventory_Slot = From_Inventory_Slot;
	Parms.To_Slot = To_Slot;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Deposit_Container_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Inventory_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Container_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Deposit_Container_Item(int32 From_Inventory_Slot, int32 To_Container_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Deposit_Container_Item");

	Params::IInventoryHUDInterface_C_UI_Deposit_Container_Item_Params Parms{};

	Parms.From_Inventory_Slot = From_Inventory_Slot;
	Parms.To_Container_Slot = To_Container_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Take_Container_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Container_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Inventory_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Take_Container_Item(int32 From_Container_Slot, int32 To_Inventory_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Take_Container_Item");

	Params::IInventoryHUDInterface_C_UI_Take_Container_Item_Params Parms{};

	Parms.From_Container_Slot = From_Container_Slot;
	Parms.To_Inventory_Slot = To_Inventory_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Move_Container_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Container_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Container_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Move_Container_Item(int32 From_Container_Slot, int32 To_Container_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Move_Container_Item");

	Params::IInventoryHUDInterface_C_UI_Move_Container_Item_Params Parms{};

	Parms.From_Container_Slot = From_Container_Slot;
	Parms.To_Container_Slot = To_Container_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Split_Container_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Container_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Container_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Split_Container_Item(int32 From_Container_Slot, int32 To_Container_Slot, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Split_Container_Item");

	Params::IInventoryHUDInterface_C_UI_Split_Container_Item_Params Parms{};

	Parms.From_Container_Slot = From_Container_Slot;
	Parms.To_Container_Slot = To_Container_Slot;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Move_Inventory_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Inventory_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Inventory_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Move_Inventory_Item(int32 From_Inventory_Slot, int32 To_Inventory_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Move_Inventory_Item");

	Params::IInventoryHUDInterface_C_UI_Move_Inventory_Item_Params Parms{};

	Parms.From_Inventory_Slot = From_Inventory_Slot;
	Parms.To_Inventory_Slot = To_Inventory_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Split_Inventory_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Inventory_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Inventory_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Split_Inventory_Item(int32 From_Inventory_Slot, int32 To_Inventory_Slot, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Split_Inventory_Item");

	Params::IInventoryHUDInterface_C_UI_Split_Inventory_Item_Params Parms{};

	Parms.From_Inventory_Slot = From_Inventory_Slot;
	Parms.To_Inventory_Slot = To_Inventory_Slot;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_UnEquip_Inventory_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Inventory_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Inventory_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_UnEquip_Inventory_Item(int32 From_Inventory_Slot, int32 To_Inventory_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_UnEquip_Inventory_Item");

	Params::IInventoryHUDInterface_C_UI_UnEquip_Inventory_Item_Params Parms{};

	Parms.From_Inventory_Slot = From_Inventory_Slot;
	Parms.To_Inventory_Slot = To_Inventory_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Equip_Inventory_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Inventory_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Inventory_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Equip_Inventory_Item(int32 From_Inventory_Slot, int32 To_Inventory_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Equip_Inventory_Item");

	Params::IInventoryHUDInterface_C_UI_Equip_Inventory_Item_Params Parms{};

	Parms.From_Inventory_Slot = From_Inventory_Slot;
	Parms.To_Inventory_Slot = To_Inventory_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Get_IsShiftKeyDown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsShiftKeyDown                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInventoryHUDInterface_C::UI_Get_IsShiftKeyDown(bool* IsShiftKeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Get_IsShiftKeyDown");

	Params::IInventoryHUDInterface_C_UI_Get_IsShiftKeyDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsShiftKeyDown != nullptr)
		*IsShiftKeyDown = Parms.IsShiftKeyDown;

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Get_PlayerStats
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Gold                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Damage                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Armor                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Strength                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Dexterity                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Intelligence                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InventorySize                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryHUDInterface_C::UI_Get_PlayerStats(int32* Gold, int32* Damage, int32* Armor, int32* Strength, int32* Dexterity, int32* Intelligence, int32* InventorySize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Get_PlayerStats");

	Params::IInventoryHUDInterface_C_UI_Get_PlayerStats_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Gold != nullptr)
		*Gold = Parms.Gold;

	if (Damage != nullptr)
		*Damage = Parms.Damage;

	if (Armor != nullptr)
		*Armor = Parms.Armor;

	if (Strength != nullptr)
		*Strength = Parms.Strength;

	if (Dexterity != nullptr)
		*Dexterity = Parms.Dexterity;

	if (Intelligence != nullptr)
		*Intelligence = Parms.Intelligence;

	if (InventorySize != nullptr)
		*InventorySize = Parms.InventorySize;

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Set_IsMouseOverUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMouseOverUI                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInventoryHUDInterface_C::UI_Set_IsMouseOverUI(bool IsMouseOverUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Set_IsMouseOverUI");

	Params::IInventoryHUDInterface_C_UI_Set_IsMouseOverUI_Params Parms{};

	Parms.IsMouseOverUI = IsMouseOverUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Close_Container
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInventoryHUDInterface_C::UI_Close_Container()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Close_Container");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Close_Equipment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInventoryHUDInterface_C::UI_Close_Equipment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Close_Equipment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Close_Inventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInventoryHUDInterface_C::UI_Close_Inventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryHUDInterface_C", "UI_Close_Inventory");



	UObject::ProcessEvent(Func, nullptr);

}

}


