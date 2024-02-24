#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x251 - 0x230)
// WidgetBlueprintGeneratedClass UI_EnhancedEditionLogo.UI_EnhancedEditionLogo_C
class UUI_EnhancedEditionLogo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Logo_Smoke;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Logo_Text;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Logo;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ForceVisibility;                                   // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_EnhancedEditionLogo_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_UI_EnhancedEditionLogo(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess, enum class EPlatformSKU CallFunc_GetPlatformSKU_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


