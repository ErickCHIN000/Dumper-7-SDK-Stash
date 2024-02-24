#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x308 - 0x260)
// WidgetBlueprintGeneratedClass UMG_PlayerName.UMG_PlayerName_C
class UUMG_PlayerName_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Avatar;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_PlayerName;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APlayerState*                          PlayerState;                                       // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateBrush                           TempBrush;                                         // 0x280(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUMG_PlayerName_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_UMG_PlayerName(int32 EntryPoint, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue_1, const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, bool CallFunc_NotEqual_StrStr_ReturnValue, enum class EBlueprintAsyncResultSwitch CallFunc_GetSteamFriendAvatar_Result, class UTexture2D* CallFunc_GetSteamFriendAvatar_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable);
};

}


