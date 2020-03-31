#pragma once

#include "Framework/Application/IInputProcessor.h"
#include "Input/Events.h"

class FHKInputProcessor : public TSharedFromThis<FHKInputProcessor>,public IInputProcessor
{
	virtual void Tick(const float DeltaTime, FSlateApplication& SlateApp, TSharedRef<ICursor> Cursor) override;
	virtual bool HandleKeyDownEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) override;
	virtual bool HandleKeyUpEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) override;
	void KeyHandle_F12();
};

