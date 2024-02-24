#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x290 - 0x270)
// WidgetBlueprintGeneratedClass MELoadingScreen_BP.MELoadingScreen_BP_C
class UMELoadingScreen_BP_C : public UTwLoadingScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      LoopThrobber;                                      // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                LoadingScreenBG;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMELoadingScreen_BP_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_MELoadingScreen_BP(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class AMED_DLCManager* CallFunc_GetDLCManager_ReturnValue, bool CallFunc_OwnsDLC01_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


