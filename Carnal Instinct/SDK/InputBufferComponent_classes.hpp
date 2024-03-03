#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xE8 - 0xB0)
// BlueprintGeneratedClass InputBufferComponent.InputBufferComponent_C
class UInputBufferComponent_C : public UActorComponent
{
public:
	enum class E_InputBufferKey                  StoredKey;                                         // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOpen;                                            // 0xB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2894[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnInputBufferConsumed;                             // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnInputBufferOpen;                                 // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnInputBufferClose;                                // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UInputBufferComponent_C* GetDefaultObj();

	void GetStoredKey(enum class E_InputBufferKey* StoredKey);
	void CloseInputBuffer();
	void OpenInputBuffer();
	void UpdateKey(enum class E_InputBufferKey Key);
	void ConsumeInputBuffer();
	void OnInputBufferClose__DelegateSignature();
	void OnInputBufferOpen__DelegateSignature();
	void OnInputBufferConsumed__DelegateSignature(enum class E_InputBufferKey Key);
};

}


