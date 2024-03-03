#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x328 (0x588 - 0x260)
// WidgetBlueprintGeneratedClass WB_WindowSwitcher.WB_WindowSwitcher_C
class UWB_WindowSwitcher_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      AnimHoverQuestMinusAbilities;                      // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHoverQuestMinusAlch;                           // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHoverWorldMapMinusAbilities;                   // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHoverWorldMapMinusAlch;                        // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHoverWorldMapMinusQuests;                      // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHoverWorldMapMinusInventory;                   // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHoverQuestMinusInventory;                      // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHoverQuestMinusWorldmap;                       // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHoverWorldMap;                                 // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHoverQuests;                                   // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHoverAbilities;                                // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHoverInventoryABI;                             // 0x2C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHoverInventory;                                // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHoverCraft;                                    // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Abilities;                                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Abilities_Abilities;                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Abilities_Forms;                            // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Abilities_Inventory;                        // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Abilities_Lore;                             // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Abilities_Quests;                           // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Abilities_World;                            // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Forms_Abilities;                            // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Forms_Forms;                                // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Forms_Inventory;                            // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Forms_Lore;                                 // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Forms_Quests;                               // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Forms_World;                                // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Inv;                                        // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Inventory_Abilities;                        // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Inventory_Forms;                            // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Inventory_Inventory;                        // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Inventory_Lore;                             // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Inventory_Quests;                           // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Inventory_World;                            // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Map_Abilities;                              // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Map_Forms;                                  // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Map_Inventory;                              // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Map_Lore;                                   // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Map_Quests;                                 // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Map_World;                                  // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Quest_Abilities;                            // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Quest_Forms;                                // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Quest_Inventory;                            // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Quest_Lore;                                 // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Quest_Quests;                               // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Quest_World;                                // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Crafting;                                          // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Forms;                                             // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Backglow;                                    // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Backglow_1;                                  // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Backglow_2;                                  // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Backglow_3;                                  // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Backglow_4;                                  // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_underlineinv;                                  // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Inventory;                                         // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Quests;                                            // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Storage;                                           // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher;                                          // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Abilities_Abilities;                          // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Abilities_Forms;                              // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Abilities_Inventory;                          // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Abilities_Lore;                               // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Abilities_Quests;                             // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Abilities_World;                              // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Forms_Abilities;                              // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Forms_Inventory;                              // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Forms_Lore;                                   // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Forms_Quest;                                  // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Forms_World;                                  // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Inventory_Abilities;                          // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Inventory_Forms;                              // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Inventory_Inventory;                          // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Inventory_Lore;                               // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Inventory_Quests;                             // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Inventory_World;                              // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Map_Abilities;                                // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Map_Forms;                                    // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Map_Inventory;                                // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Map_Lore;                                     // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Map_Quest;                                    // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Map_World;                                    // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Quest_Abilities;                              // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Quest_Forms;                                  // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Quest_Inventory;                              // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Quest_Lore;                                   // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Quest_Quests;                                 // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Quest_World;                                  // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock;                                         // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_2;                                       // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_4;                                       // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Underline_Forms_Forms;                             // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Underline_Inventory_Abilities;                     // 0x548(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Underline_Inventory_Lore;                          // 0x550(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Underline_Inventory_World;                         // 0x558(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Vendor;                                            // 0x560(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          WorldMap;                                          // 0x568(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAC_Crafting_C*                        Crafting_Component;                                // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAC_DCSAbilityTree_C*                  AbilityTree_Component;                             // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_WindowSwitcher_C* GetDefaultObj();

	struct FLinearColor Get_UI_Border_Color(bool CallFunc_IsValid_ReturnValue);
	void BndEvt__Button_Abilities_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Inv_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void Crafting_to_Inventory();
	void Abilities_to_Inventory();
	void Inventory_to_Abilities();
	void BndEvt__Button_Quests_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_WorldMap_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Abilities_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Abilities_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Forms_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Forms_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_WorldMap_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_WorldMap_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Quests_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Quests_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_craft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_craft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Inventory_1_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Quests_1_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Map_Inventory_1_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Map_World_1_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Quest_Inventory_1_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Abilities_World_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Abilities_Quests_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Quest_Abilities_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Map_Abilities_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Inventory_Forms_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature();
	void OpenForms();
	void BndEvt__WB_WindowSwitcher_Button_Map_Abilities_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Map_Abilities_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Map_Inventory_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Map_Inventory_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Map_Quests_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Map_Quests_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Map_Lore_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Map_Lore_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Map_Forms_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Map_Forms_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Quest_Abilities_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Quest_Abilities_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Quest_Forms_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Quest_Forms_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Quest_Inventory_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Quest_Inventory_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Quest_Lore_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Quest_Lore_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Quest_World_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Quest_World_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void BndEvt__WB_WindowSwitcher_Button_Abilities_Forms_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Abilities_Forms_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Abilities_Inventory_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Abilities_Inventory_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Abilities_Lore_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Abilities_Lore_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Abilities_Quests_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Abilities_Quests_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Abilities_World_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Abilities_World_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Map_Forms_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Quest_Forms_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Forms_Inventory_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Forms_Abilities_K2Node_ComponentBoundEvent_44_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Forms_Abilities_K2Node_ComponentBoundEvent_45_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Forms_Inventory_K2Node_ComponentBoundEvent_46_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Forms_Inventory_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Forms_Lore_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Forms_Lore_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Forms_Quests_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Forms_Quests_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Forms_World_K2Node_ComponentBoundEvent_55_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Forms_World_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Forms_Quests_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_WindowSwitcher_Button_Forms_World_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WB_WindowSwitcher(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class ABP_CombatCharacter_C* K2Node_DynamicCast_AsBP_Combat_Character, bool K2Node_DynamicCast_bSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, const struct FSlateColor& K2Node_MakeStruct_SlateColor_6, const struct FSlateColor& K2Node_MakeStruct_SlateColor_7, const struct FSlateColor& K2Node_MakeStruct_SlateColor_8, const struct FSlateColor& K2Node_MakeStruct_SlateColor_9, const struct FSlateColor& K2Node_MakeStruct_SlateColor_10, const struct FSlateColor& K2Node_MakeStruct_SlateColor_11, const struct FSlateColor& K2Node_MakeStruct_SlateColor_12, const struct FSlateColor& K2Node_MakeStruct_SlateColor_13, const struct FSlateColor& K2Node_MakeStruct_SlateColor_14, const struct FSlateColor& K2Node_MakeStruct_SlateColor_15, const struct FSlateColor& K2Node_MakeStruct_SlateColor_16, const struct FSlateColor& K2Node_MakeStruct_SlateColor_17, const struct FSlateColor& K2Node_MakeStruct_SlateColor_18, const struct FSlateColor& K2Node_MakeStruct_SlateColor_19, const struct FSlateColor& K2Node_MakeStruct_SlateColor_20, const struct FSlateColor& K2Node_MakeStruct_SlateColor_21, const struct FSlateColor& K2Node_MakeStruct_SlateColor_22, const struct FSlateColor& K2Node_MakeStruct_SlateColor_23, const struct FSlateColor& K2Node_MakeStruct_SlateColor_24, const struct FSlateColor& K2Node_MakeStruct_SlateColor_25, const struct FSlateColor& K2Node_MakeStruct_SlateColor_26, const struct FSlateColor& K2Node_MakeStruct_SlateColor_27, const struct FSlateColor& K2Node_MakeStruct_SlateColor_28, const struct FSlateColor& K2Node_MakeStruct_SlateColor_29, const struct FSlateColor& K2Node_MakeStruct_SlateColor_30, const struct FSlateColor& K2Node_MakeStruct_SlateColor_31, const struct FSlateColor& K2Node_MakeStruct_SlateColor_32, const struct FSlateColor& K2Node_MakeStruct_SlateColor_33, const struct FSlateColor& K2Node_MakeStruct_SlateColor_34, const struct FSlateColor& K2Node_MakeStruct_SlateColor_35, const struct FSlateColor& K2Node_MakeStruct_SlateColor_36, const struct FSlateColor& K2Node_MakeStruct_SlateColor_37, const struct FSlateColor& K2Node_MakeStruct_SlateColor_38, const struct FSlateColor& K2Node_MakeStruct_SlateColor_39, const struct FSlateColor& K2Node_MakeStruct_SlateColor_40, const struct FSlateColor& K2Node_MakeStruct_SlateColor_41, const struct FSlateColor& K2Node_MakeStruct_SlateColor_42, const struct FSlateColor& K2Node_MakeStruct_SlateColor_43, const struct FSlateColor& K2Node_MakeStruct_SlateColor_44, const struct FSlateColor& K2Node_MakeStruct_SlateColor_45, const struct FSlateColor& K2Node_MakeStruct_SlateColor_46, const struct FSlateColor& K2Node_MakeStruct_SlateColor_47, const struct FSlateColor& K2Node_MakeStruct_SlateColor_48, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class UAC_Crafting_C* CallFunc_Get_AC_Crafting_AC_Crafting, class UWB_WorldMap_C* CallFunc_Open_World_Map_Widget_World_Map_Ref, class UWB_WorldMap_C* CallFunc_Open_World_Map_Widget_World_Map_Ref_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, class ABP_CombatCharacter_C* K2Node_DynamicCast_AsBP_Combat_Character_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_CombatCharacter_C* K2Node_DynamicCast_AsBP_Combat_Character_2, bool K2Node_DynamicCast_bSuccess_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_3, bool CallFunc_IsPackagedForDistribution_ReturnValue, class ABP_CombatCharacter_C* K2Node_DynamicCast_AsBP_Combat_Character_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsPackagedForDistribution_ReturnValue_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_4, class ABP_CombatCharacter_C* K2Node_DynamicCast_AsBP_Combat_Character_4, bool K2Node_DynamicCast_bSuccess_4, class UWB_WorldMap_C* CallFunc_Open_World_Map_Widget_World_Map_Ref_2, bool CallFunc_IsPackagedForDistribution_ReturnValue_2, bool CallFunc_IsPackagedForDistribution_ReturnValue_3, class ASEQ_Master_CharacterCustomization_C* CallFunc_GetActorOfClass_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_49, bool CallFunc_IsValid_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_1, class ASEQ_Master_CharacterCustomization_C* CallFunc_GetActorOfClass_ReturnValue_1, class ASEQ_Master_CharacterCustomization_C* CallFunc_GetActorOfClass_ReturnValue_2, class ASEQ_Master_CharacterCustomization_C* CallFunc_GetActorOfClass_ReturnValue_3, class UWB_WorldMap_C* CallFunc_Open_World_Map_Widget_World_Map_Ref_3);
};

}


