#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2E8 - 0x260)
// WidgetBlueprintGeneratedClass UMG_DropGroupAttribute.UMG_DropGroupAttribute_C
class UUMG_DropGroupAttribute_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_59;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_Main;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_AttributeIcon;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_AttributeDesc;                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsNegativeAttribute;                               // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3E57[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Soft_Texture;                                      // 0x290(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x2B8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Popup;                                             // 0x2D0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_DropGroupAttribute_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_UMG_DropGroupAttribute(int32 EntryPoint, class UUMG_BasicTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
};

}


