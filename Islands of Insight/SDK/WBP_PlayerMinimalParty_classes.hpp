#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x370 - 0x360)
// WidgetBlueprintGeneratedClass WBP_PlayerMinimalParty.WBP_PlayerMinimalParty_C
class UWBP_PlayerMinimalParty_C : public UPlayerWidget
{
public:
	class UImage*                                CrownImage;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_187;                                   // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerMinimalParty_C* GetDefaultObj();

	enum class ESlateVisibility Get_CrownImage_Visibility_0(class ASophiaPlayerState* CallFunc_TryGetPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLeader_ReturnValue);
};

}


